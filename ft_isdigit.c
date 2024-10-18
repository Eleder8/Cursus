/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:31:54 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/25 10:48:20 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Verifica si el caracter es un número (entre 0 y 9)*/
/*Si 'c' está entre 0 y 9 devolverá 1 (v) o 0 (F)*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;

	test1 = '1';
	test2 = 'a';
	test3 = 'A';
	printf("test1: %d\n", ft_isdigit(test1));
	printf("test2: %d\n", ft_isdigit(test2));
	printf("test3: %d\n", ft_isdigit(test3));
	return (0);
}*/
