/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 09:39:44 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 09:43:46 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Convierte una letra mayúscula en su minúscula, sino la devuelve sin cambios*/
/*Usa los valores "ASCII" sumando 32 para convertirla en minúscula*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*
int	main(void)
{
	char	c;
	char	d;
	char	resultc;
	char	resultd;

	c = 'B';
	d = 'a';
	resultc = ft_tolower(c);
	resultd = ft_tolower(d);
	printf("Resultado de convertir '%c' en minuscula es: '%c'\n", c, resultc);
	printf("Resultado de convertir '%c' en minuscula es: '%c'\n", d, resultd);
	return (0);
}*/
