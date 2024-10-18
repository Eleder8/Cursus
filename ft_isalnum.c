/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:52:37 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/25 11:28:04 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Verifica si un caracter es letra o número*/
/*usa las funciones para averiguar si 'c' es letra o número y da 1 (V) y 0 (F)*/

int	ft_isalnum(int c)
{
	return (ft_isalpha(c)
		|| ft_isdigit(c));
}

int	main(void)
{
	char	test1;
	char	test2;
	char	test3;

	test1 = 'A';
	test2 = '0';
	test3 = '?';
	printf("test1: %d\n", ft_isalnum(test1));
	printf("test2: %d\n", ft_isalnum(test2));
	printf("test3: %d\n", ft_isalnum(test3));
	return (0);
}
