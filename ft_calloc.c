/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:54:17 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 09:14:37 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
/*#include <stdio.h>*/
/*Reserva memoria para un bloque de datos asegurandose que se incialice a 0*/
/*"ptr" es un puntero que apuntará a la memoria que se reservará con "malloc"*/
/*"count * size" calcula cuanta memoria se necesita("count" es Nº de elementos*/
/*y "size" es el tamaño de cada elemento)*/
/*Se usa "ft_bzero" que pone todos los bytes de la memoria recien asignada a 0*/

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
int	main(void)
{
	int		*arr;
	size_t	i;
	size_t	n;

	n = 5;
	arr = (int *)ft_calloc(n, sizeof(int));
	if (!arr)
	{
		printf("Error al asignar memoria.\n");
		return (1);
	}
	i = 0;
	while (i < n)
	{
		printf("arr[%zu] = %d\n", i, arr[i]);
		i++;
	}
	free(arr);
	return (0);
}*/
