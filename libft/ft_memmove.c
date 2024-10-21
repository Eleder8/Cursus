/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:06:06 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/26 12:26:52 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Copia "len" bytes desde "src" a "dst"*/
/*Si se solapan copia los datos del final al principio para no sobreescriturar*/
/*Los punteros que apuntan a "src y dst" se hacen unsigned para trabajar bytes*/
/*Si "src o dst" son NULL la funcion no hará la copia y retorna NULL (error)*/
/*Si 'd'está después de 's' se solapan.Copia desde el  ultimo byte al primero*/
/*Si no se solapan usa "ft_memcpy" para realizar la copia*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (src == NULL || dst == NULL)
		return (NULL);
	if (d > s)
	{
		while (len--)
			d[len] = s[len];
	}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
/*
int	main(void)
{
	char	src[12];
	char	dst[6];

	src[0] = 'H';
	src[1] = 'o';
	src[2] = 'l';
	src[3] = 'a';
	src[4] = '!';
	src[5] = ' ';
	src[6] = 'M';
	src[7] = 'u';
	src[8] = 'n';
	src[9] = 'd';
	src[10] = 'o';
	src[11] = '\0';
	printf("Antes de usar ft_memmove sin solapamiento: %s\n", src);
	ft_memmove(dst, src, 5);
	printf("Después de usar ft_memmove sin solapamiento: %s\n", dst);
	printf("Antes de usar ft_memmove con solapamiento: %s\n", src);
	ft_memmove(src + 5, src, 7);
	printf("Después de usar ft_memmove con solapamiento: %s\n", src);
	return (0);
}*/
