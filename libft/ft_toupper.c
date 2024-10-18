/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:32:20 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 09:38:14 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
/*Convierte una letra minúscula en su mayuscula, sino la devuelve sin cambios*/
/*Utiliza  los valores "ASCII" restando 32 a la letra para hacerla mayuscula*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -32);
	return (c);
}
/*
int	main(void)
{
	char	c;
	char	d;
	char	resultc;
	char	resultd;

	c = 'b';
	d = 'A';
	resultc = ft_toupper(c);
	resultd = ft_toupper(d);
	printf("El resultado de convertir '%c' a mayúscula es: '%c'\n", c, resultc);
	printf("El resultado de convertir '%c' a mayúscula es: '%c'\n", d, resultd);
	return (0);
}*/
