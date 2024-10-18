/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:51:59 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/25 13:16:02 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
/*#include <stdio.h>*/
/*LLena un bloque de memoria con un valor específico*/
/* 'b' es el puntero al bloque de memoria que se quiere llenar*/
/* 'c' es el valor que se usará para llenar cada byte del bloque de memoria b*/
/* "len" es la cantidad de bytes que se desea llenar con c*/
/* Convierte 'b' a "unsigned char *" para trabajar con cada byte de memoria*/
/* 'i' se incia en 0 para empezar a recorrer los "len" bytes*/
/*Bucle while se ejecuta mientras i sea menor que len*/
/*Asigna el valor de 'c' a la posición de 'i' de "ptr"*/
/*Incrementa 'i' pasando al siguiente byte y al final  devuelve 'b' cambiado*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[10];

	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = 'e';
	str[5] = '\0';
	printf("Antes de ft_memset: %s\n", str);
	ft_memset(str, 'h', 3);
	printf("Despues de ft_memset: %s\n", str);
	return (0);
}*/
