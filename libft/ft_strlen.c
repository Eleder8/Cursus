/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:10:59 by eloizaga          #+#    #+#             */
/*   Updated: 2024/09/30 09:24:38 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Calcula los carácteres que hay en un string 's' hasta encontrar el '\0'*/
/*Inicia un contador (len) en 0 para contar los carácteres*/
/*Recorre el string 's' con el bucle while mientras el carácter no sea'\0'*/
/*Incrementa len++ por cada carácter encontrado  y devuelve len al final*/
/*Así sabe cuantos carácteres tiene el string*/
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
/*
int	main(void)
{
	char	*test1;
	char	*test2;

	test1 = "Hola";
	test2 = "";
	printf("Longitud de 'Hola': %zu\n", ft_strlen(test1));
	printf("Longitud de '': %zu\n", ft_strlen(test2));
	return (0);
}*/
