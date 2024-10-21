/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 14:34:18 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 09:28:33 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Combina "src" al final de "dst" asegurando que termine en '\0'*/
/*Y que no sobrepase el tamaño total de "dst" especificado por "dstsize"*/
/*Usa "ft_strlen" para calcular la longitud de "dst y src" sin contar '\0'*/
/*Si "dstsize" es menor o igual  a la longitud de dst, no concatena nada*/
/*Y devuelve el tamaño que la combinación habría tenido si "dst" fuera grande*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	i = 0;
	while (src[i] && (len_dst + i) < (dstsize - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
/*
int	main(void)
{
	char	dest[20];
	char	src[6];
	size_t	size;
	size_t	ret;

	dest[0] = 'H';
	dest[1] = 'o';
	dest[2] = 'l';
	dest[3] = 'a';
	dest[4] = ' ';
	dest[5] = '\0';
	src[0] = 'M';
	src[1] = 'u';
	src[2] = 'n';
	src[3] = 'd';
	src[4] = 'o';
	src[5] = '\0';
	size = 8;
	ret = ft_strlcat(dest, src, size);
	printf("Origen src: %s\n", src);
	printf("Destino dest: %s\n", dest);
	printf("Longitud de los strings combinado ret: %zu\n", ret);
	return (0);
}*/
