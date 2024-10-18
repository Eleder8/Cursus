/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:06:48 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 12:00:07 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>
/*#include <stdio.h>*/
/*Compara los strings "s1 y s2" hasta un Nº máximo de carácteres 'n'*/
/*Para saber si son iguales o uno es mayor o menor mediante el valor "ASCII"*/
/*El bucle recorre "s1 y s2" mientras "i < n" y que "s1 o s2" no sea '\0'*/
/*"unsigned char" convierte los carácteres a "ASCII" y devuelve la diferencia*/
/*Así determina si son iguales, mayor('+',"s1" mayor) o menor('-',"s1" menor)*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	str1[] = "Hola";
	const char	str2[] = "Holanda";
	int			result;

	result = ft_strncmp(str1, str2, 3);
	if (result == 0)
		printf("Las letras de los strings comparadas son iguales.\n");
	else if (result < 0)
		printf("'%s' es menor que '%s'.\n", str1, str2);
	else
		printf("'%s' es mayor que '%s'.\n", str1, str2);
	return (0);
}*/
