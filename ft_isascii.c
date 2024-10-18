/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:37:35 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/25 11:50:03 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Verifica si un carácter es ASCII*/
/*La función revisa si 'c' pertenece a ASCII (rango de 0 a 127) 1 (V) y 0 (F)*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;
	char	test4;

	test1 = 'A';
	test2 = ' ';
	test3 = 128;
	test4 = 127;
	printf("test1 'A' : %d\n", ft_isascii(test1));
	printf("test2 ' ' : %d\n", ft_isascii(test2));
	printf("test3 128 : %d\n", ft_isascii(test3));
	printf("test4 127 : %d\n", ft_isascii(test4));
	return (0);
}*/
