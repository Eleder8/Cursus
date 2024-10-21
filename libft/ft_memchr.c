/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:01:35 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 12:43:05 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Busca un caracter 'c' en los primeros 'n' bytes de un bloque de*/
/*memoria apuntada por el puntero 's'*/
/*Convierte el puntero 's'en "unsigned char" para trabajar byte a byte ("ptr")*/
/*Si encuentra 'c' devuelve un puntero a la posición donde lo encontró*/
/*Si no lo encuentra en los primeros 'n' bytes devuelve "NULL"*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	str[] = "Hola mundo";
	char		c;
	char		*result;

	c = 'm';
	result = ft_memchr(str, c, 9);
	if (result)
		printf("Carácter '%c' está en la posición: %ld\n", c, result - str);
	else
		printf("Carácter '%c' no está en los bytes sugeridos", c);
	return (0);
}*/
