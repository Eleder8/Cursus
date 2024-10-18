/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 09:48:25 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/25 10:30:36 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*ft_isalpha Verifica si un carácter es una letra*/
/*Si 'c' está entre A y Z o a y z devolverá 1 (V) o 0 (F)*/

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
	char	test1;
	char	test2;
	char	test3;

	test1 = 'A';
	test2 = '0';
	test3 = 'a';
	printf("test1 : %d\n", ft_isalpha(test1));
	printf("test2 : %d\n", ft_isalpha(test2));
	printf("test3 : %d\n", ft_isalpha(test3));
	return (0);
}*/
