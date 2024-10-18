/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:02:41 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/15 15:17:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
/*#include <stdio.h>*/
/*toma un trozo de una string y lo devuelve como uno nuevo.*/
/*Usa "ft_strlen" así calcula cuantos carácteres tiene el string original 's'*/
/*"finish" determina los caracteres que se van copian (inicialmente se pone 0)*/
/*Si "start" es menor que "slen"(longitud de 's') calcula los carácteres desde*/
/*"start" hasta el final del string*/
/*Si "finish > len" asegura que no se copien carácteres de mas ajustando*/
/*"finish" para que sea igual a "len"*/
/*"substr" reserva memoria para el substring que debe tener espacio para */
/*"finish" caracteres + 1 por el '\0' que indica el final del string*/
/*Usa "ft_strlcpy" para copiar los carácteres desde "start" en 's' hasta el*/
/*nuevo string "substr". Copia "finsih" carácteres mas el '\0'*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	substr = (char *)malloc(sizeof(char) * (finish +1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, finish +1);
	return (substr);
}
/*
int	main(void)
{
	char			*str;
	char			*substr;
	unsigned int	start;
	size_t			len;

	str = "Hola, mundo";
	start = 5;
	len = 5;
	substr = ft_substr(str, start, len);
	if (substr)
	{
		printf("Antes de substr: %s\n", str);
		printf("Resultado de substr: %s\n", substr);
		free(substr);
	}
	else
	{
		printf("Error: substr es NULL\n");
	}
	return (0);
}*/
