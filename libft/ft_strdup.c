/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 12:25:47 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 09:19:24 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Coge un string de texto "s1" existente y crea una copia en una ubicación */
/*diferente de la memoria*/
/*"size" usa "ft_strlen" para contar los carácteres de "s1", sin */
/* incluir '\0' que indica cuando acaba el string*/
/*"dest" es el puntero que apunta a la nueva memoria donde almacena la copia*/
/*"malloc" reserva espacio en memoria y se pone "size + 1" para el '\0' que*/
/*indica el final del string*/
/*Se usa "ft_memcpy" para copiar "s1" el nuevo espacio de memoria "dest" y */
/*copia "size" carácteres que es el tamaño del string sin el '\0'*/
/*Se pone "dest[size] = '\0'" para asegurar que el nuevo string ternima bien*/

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(s1);
	dest = (char *)malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, size);
	dest[size] = '\0';
	return (dest);
}
/*
int	main(void)
{
	const char	*original = "Hola Mundo";
	char		*duplicada;

	duplicada = ft_strdup(original);
	if (!duplicada)
	{
		printf("Error al duplicar la cadena.\n");
		return (1);
	}
	printf("Cadena original: %s\n", original);
	printf("Cadena duplicada: %s\n", duplicada);
	free(duplicada);
	return (0);
}*/
