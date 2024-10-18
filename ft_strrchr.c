/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 10:25:52 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 11:05:26 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Busca la última aparición de un carácter 'c' en el string 's'*/
/*Inicializa el puntero "last" que guarda la ultima posición de 'c' en 's'*/
/*Empieza en "NULL" porque aún no se ha encontrado el carácter*/
/*Bucle while que recorre 's' carácter por carácter hasta el final '\0'*/
/*Si está el carácter lo guarda en "last"(si hay mas de uno guarda el ultimo)*/
/*Si encuentra 'c' devuelve el puntero a la última aparición, si no "NULL"*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
int	main(void)
{
	const char	str[] = "Hola hola";
	char		c;
	char		*result;

	c = 'a';
	result = ft_strrchr(str, c);
	if (result)
		printf("La última '%c' está en la posición: %ld\n", c, result - str);
	else
		printf("El carácter '%c' no se encontró.\n", c);
	return (0);
}*/
