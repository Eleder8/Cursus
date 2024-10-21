/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:23:43 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 09:14:09 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/* Toma un "string de texto" y lo convierte en número entero "int", también*/
/*ignora carácteres que no sean números y se centra en dígitos y signo (+ o -)*/
/*"sign" variable que se usa para saber si el número es '+'(1) o '-'(-1)*/
/*"result" variable que se usa para guardar el número (comienza como '0' ya */
/*que no hemos comenzado a leer los números del string*/
/*el bucle "while" saltará los carácteres especiales del string que */
/*corresponden a espacios en blanco y similares*/
/*"ft_isdigit(*str)" verifica si el carácter actual al que apunta "str" es */
/*un dígito numerico ('0' a '9'). Si lo es lo convierte en su valor numérico*/
/* mediante "*str - '0'" (valor "ASCII").Se utiliza "result * 10" para hacer */
/*espacio al nuevo dígito*/

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while (*str == ' ' || *str == '\n'
		|| *str == '\t' || *str == '\r'
		|| *str == '\v' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	const char	str1[] = "  -1234";
	const char	str2[] = "  -5678prueba";
	const char	str3[] = "   +42";

	printf("Convierte el string '%s' en: %d\n", str1, ft_atoi(str1));
	printf("Convierte el string '%s' en: %d\n", str2, ft_atoi(str2));
	printf("Convierte el string '%s' en: %d\n", str3, ft_atoi(str3));
	return (0);
}*/
