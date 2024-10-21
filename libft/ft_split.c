/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:26:57 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/15 18:42:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*Toma un string de texto 's' y lo divide en varias palabras usando un */
/*carácter delimitador 'c'(como un espacio ' ').Devuelve un array de strings*/
/*donde cada elemento es una de esas palabras*/
/*"wordcount" cuenta cuantas palabras tiene el string 's' usando 'c'*/
/*"free_memory" si al dividir las palabras sale algo mal, libera memoria*/
/*"worddupli" toma una palabra desde "start" y crea una copia*/
/*"process_split" divide el string usando 'c' para saber donde termina cada */
/*palabra y la almacena en el array "result". si hay error libera la memoria*/

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (*s)
	{
		if (*s != c && !i)
		{
			i = 1;
			count++;
		}
		else if (*s == c)
			i = 0;
		s++;
	}
	return (count);
}

static void	ft_free_memory(char **result)
{
	size_t	i;

	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static char	*ft_worddupli(char const *start, size_t len)
{
	char	*word;

	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, start, len + 1);
	return (word);
}

static int	ft_copy_words(char **result, char const *s, char c, size_t j)
{
	char	*next;

	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			break ;
		next = ft_strchr(s, c);
		if (!next)
			next = (char *)s + ft_strlen(s);
		if (next > s)
		{
			result[j] = ft_worddupli(s, next - s);
			if (!result[j])
			{
				return (0);
			}
			j++;
		}
		s = next;
	}
	result[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!result)
		return (NULL);
	if (!ft_copy_words(result, s, c, 0))
	{
		ft_free_memory(result);
		return (NULL);
	}
	return (result);
}
