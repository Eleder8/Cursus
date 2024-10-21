/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 08:54:48 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/21 11:35:57 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Copia 'n' bytes desde una la "*src" al destino "*dst"*/
/*Revisa si los punteros "src y dst" son NULL para evitar errores*/
/*Copia los bytes de "src a dst" uno por uno y devuelve el puntero a "dst"*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (n == 0 || dst == src)
		return (dst);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = ((const char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	src[6];
	char	dst[6];

	src[0] = '1';
	src[1] = '2';
	src[2] = '3';
	src[3] = '4';
	src[4] = '5';
	src[5] = '\0';
	ft_memcpy(dst, src, 6);
	printf("Antes de usar ft_memcpy: %s\n", src);
	printf("Despues de usar ft_memcpy: %s\n", dst);
	return (0);
}*/
