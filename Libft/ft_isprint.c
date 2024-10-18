/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:51:06 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/25 12:08:48 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Verifica si un carácter es imprimible (que se muestra en la pantalla)*/
/*Revisa si 'c' está en la tabla ASCII (Rango de 32 a 126) 1 (V) y 0 (F)*/

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;

	test1 = 126;
	test2 = 127;
	test3 = 'A';
	printf("test1 126: %d\n", ft_isprint(test1));
	printf("test2 127: %d\n", ft_isprint(test2));
	printf("test3 A: %d\n", ft_isprint(test3));
	return (0);
}*/
