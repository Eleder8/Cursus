/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:33:11 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 14:22:57 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Busca un substring "needle" dentro de otro string "haystack" en los primeros*/
/*"len" carácteres de "haystack".Si lo encuentra, imprime el fragmento de*/
/*"haystack" desde donde se encontró "needle" hasta el final del string.*/
/*Si "needle" esta vacío devuelve "haystack" ya que no hay nada que buscar.*/
/* "ft_strlen(needle)" calcula cuantos carácteres tiene "needle".*/
/*El "while" asegura no haber llegado al fin y que hay suficientes carácteres*/
/*en "haystack" para encontrar "needle" dentro del limite de "len" carácteres.*/
/*En cada paso del bucle compara "haystack con needle" con "ft_strncmp"*/
/*Si hay coincidencia el resultado es 0, devolviendo un puntero que señala*/
/*el lugar donde "haystack" encontró "needle"*/
/*Si no encuentra "needle" dentro de "haystack" la función devuelve "NULL"*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	i = 0;
	while (haystack[i] && (i + needle_len) <= len)
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	haystack[] = "Hola mundo, bienvenido";
	const char	needle1[] = "mundo";
	const char	needle2[] = "bien";
	const char	needle3[] = " ";
	char		*result;

	result = ft_strnstr(haystack, needle1, 15);
	if (result)
		printf("Parte del String encontrado: '%s'\n", result);
	else
		printf("Parte del String no encontrado.\n");
	result = ft_strnstr(haystack, needle2, 15);
	if (result)
		printf("Parte del String encntrado: '%s'\n", result);
	else
		printf("Parte del String no encontrado.\n");
	result = ft_strnstr(haystack, needle3, 15);
	if (result)
		printf("Parte del String encontrado: '%s'\n", result);
	else
		printf("Parte del String no encontrado.\n");
	return (0);
}*/
