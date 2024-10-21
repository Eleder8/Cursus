/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:16:56 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/25 15:00:50 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Pone a 0 un bloque de memoria (los primeros 'n' bytes)*/
/*"void *s" es un  puntero al bloque de memoria que se quiere llenar con 0*/
/*"size_t" 'n' es la cantidad de bytes que se desea llenar con 0*/
/*Usa "ft_memset" para llenar los primeros 'n' bytes de 's' con 0*/

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int	main(void)
{
	char	memori[6];
	int		i;

	memori[0] = 'H';
	memori[1] = 'o';
	memori[2] = 'l';
	memori[3] = 'a';
	memori[4] = '!';
	memori[5] = '\0';
	printf("Antes de ft_bzero:\n memori: Hola!\n");
	printf("Después de ft_bzero:\n");
	ft_bzero(memori, 3);
	i = 0;
	while (i < 6)
	{
		printf("memori[%d]: %c (ASCII: %d)\n", i, memori[i], memori[i]);
		i++;
	}
	return (0);
}*/
