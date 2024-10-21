/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:52:23 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 13:52:35 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Crea un nuevo string aplicando la función 'f' a cada carácter del string 's'*/
/*pasándole la posición del carácter y el carácter en si como argumentos (así */
/*consigue transformar cada carácter del string según una operación especifica*/
/*"convert_toupper" toma un carácter 'c' y lo convierte en mayúscula. El */
/*indice "index" es un Nº que indica la posición de cada carácter dentro de  */
/*un string pero no se usa en este caso*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (len +1));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

char	convert_toupper(unsigned int index, char c)
{
	(void)index;
	if (c >= 'a' && c <= 'z')
		return (c -32);
	return (c);
}
/*
int	main(void)
{
	char	*s;
	char	*result;

	s = "hola, mundo";
	result = ft_strmapi(s, convert_toupper);
	if (result)
	{
		printf("Original: %s\n", s);
		printf("Resultado: %s\n", result);
		free(result);
	}
	else
	{
		printf("Error al aplicar la función.\n");
	}
	return (0);
}*/
