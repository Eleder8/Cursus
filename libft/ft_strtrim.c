/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:49:20 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 10:13:33 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*include <stdlib.h>*/
/*#include <stdio.h>*/
/*Toma un string "s1" y elimina los carácteres de "set" desde el principio*/
/*y el final.Devuelve la parte central del string sin esos carácteres*/
/*El "while" recorre "s1" desde el principio, con "ft_strchr" verifica si el */
/*carácter actual de "s1[star]" está en "set". Si está incrementa "start" */
/*para saltar el carácter(Continúa hasta encontrar un carácter que no esté */
/*en "set" o llegue al final del string*/
/*"end" guarda el valor de "ft_strlen(s1)" que calcula la longitud de "s1"*/
/*El segundo "while" retrocede desde el final del string. "ft_strchr" verifica*/
/*si el ultimo carácter de "s1" está en "set". Si está disminuye "end" para*/
/*saltar el carácter(Continúa hasta encontrar un carácter que no esté en "set"*/
/*o hasta que "end" sea menor o igual a "start"*/
/*Se usa "ft_substr" para extraer el substring que va desde "start a end",*/
/*sin incluir los carácteres de "set" que fueron eliminados*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}
/*
int	main(void)
{
	char	*s1;
	char	*set;
	char	*result;

	s1 = "  Hola, mundo  ";
	set = " ";
	result = ft_strtrim(s1, set);
	if (result)
	{
		printf("Original: '%s'\n", s1);
		printf("Set: '%s'\n", set);
		printf("Resultado: '%s'\n", result);
		free(result);
	}
	return (0);
}*/
