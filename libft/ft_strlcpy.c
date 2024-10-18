/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:48:15 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 09:21:45 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
/*#include <stdio.h>*/
/*Copia "src" a "dst" con un tamaño maximo de "dstsize" debe acabar en '\0'*/
/*El bucle while copia caracteres de "src a dst" mientras los haya*/
/*Y mientras 'i' sea menor que "dstsize -1"(para dejar espacio a '\0')*/
/*Se pone "dst[i] = '\0'" como seguro para que "dst" siempre este terminada*/
/*Devuelve la longitud de "src" para saber la cantidad de bytes que tiene src*/
/*En el main "sizeof(dst)" le dice a ft_strlcpy que el tamaño de dst es 8*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_src;

	if (src == NULL)
		return (0);
	len_src = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}
/*
int	main(void)
{
	char	src[12];
	char	dst[8];
	size_t	result;

	src[0] = 'H';
	src[1] = 'o';
	src[2] = 'l';
	src[3] = 'a';
	src[4] = ' ';
	src[5] = 'M';
	src[6] = 'u';
	src[7] = 'n';
	src[8] = 'd';
	src[9] = 'o';
	src[10] = '!';
	src[11] = '\0';
	result = ft_strlcpy(dst, src, sizeof(dst));
	printf("Fuente src: %s\n", src);
	printf("Destino dst: %s\n", dst);
	printf("Longitud de la fuente: %zu\n", result);
	return (0);
}*/
