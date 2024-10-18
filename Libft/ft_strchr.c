/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:46:28 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 10:24:37 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Busca la primera aparición del caracter 'c' en el string 's'*/
/*Si encuentra 'c' devuelve un puntero a la primera aparición de 'c' en 's'*/
/*Si c es '\0' devuelve un puntero al final de 's' ya que debe estar al final*/
/*Si se recorre todo el string y no se encuentra 'c' devuelve NULL*/

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hola!";
	char		c;
	char		*result;

	c = 'a';
	result = ft_strchr(str, c);
	if (result)
		printf("El carácter '%c' está en la posición: %td\n", c, result - str);
	else
		printf("El carácter '%c' no se encontró.\n", c);
	return (0);
}*/
