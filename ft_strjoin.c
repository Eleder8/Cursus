/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:57:38 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 13:57:44 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
/*#include <stdio.h>*/
/*Toma dos strings "s1 y s2" los une y devuelve un string nuevo juntando ambos*/
/*"len1 y len2" almacenan la longitud de ambos strings*/
/*"new_str" apunta a la memoria que será utilizada para el nuevo string*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		new_str[i] = s1[i];
		i++;
	}
	while (i < len1 + len2)
	{
		new_str[i] = s2[i - len1];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*result;

	s1 = "Hola, ";
	s2 = "Mundo";
	result = ft_strjoin(s1, s2);
	printf("Antes de ft_strjoin: s1 = %s  y s2 = %s\n", s1, s2);
	printf("Después de ft_strjoin: %s\n", result);
	if (result == NULL)
	{
		printf("Error, no se pueden unir los strings.\n");
		return (1);
	}
	free(result);
	return (0);
}*/
