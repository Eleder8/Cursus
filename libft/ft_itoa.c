/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:31:33 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 11:31:41 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <limits.h>*/
/*#include <stdio.h>*/
/*Convierte un número entero "int" en un string de carácteres "char *"*/
/*"itoa = integer to ASCII"*/
/*"get_num_length" calcula cunatos digitos tiene un int "n" incluyendo signo */
/*en caso de ser negativo o 0 en caso de ser 0. Luego divide "n/10" para */
/*contar cuantos digitos tiene*/
/*"fill_str" llena "str" con los dígitos del número de derecha a izquierda*/
/*mientras "num" sea mayor que 0 extrae el ultimo digito ("num %10"), lo*/
/*convierte a carácter y lo coloca correctamente en el string para dividirlo*/
/*por 10 para procesar el siguiente digito*/
/*"ft_itoa" convierte 'n' a tipo "long" para manejar "INT_MIN", con */
/*"get_num_length" calcula cuantos carácteres necesita el string, reserva*/
/*memoria para "str" añadiendo espacio para '\0'. Si 'n' es igual a 0 coloca*/
/*'0' como unico caracter del string. Si el Nº es negativo coloca '-' en la */
/*primera posición y convierte "num" a '+'. Llama a "fill_str" para colocar */
/*los dígitos en el string. Retorna el string con la representación del N*/

static int	get_num_length(int n)
{
	int	length;

	length = 0;
	if (n <= 0)
	{
		length = 1;
	}
	while (n != 0)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static void	fill_str(long num, char *str, int len)
{
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		len;

	num = (long)n;
	len = get_num_length(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		return (NULL);
	}
	str[len] = '\0';
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	fill_str(num, str, len);
	return (str);
}
/*
int	main(void)
{
	char	*result;
	int		numbers[5];
	int		i;

	numbers[0] = 0;
	numbers[1] = -12345;
	numbers[2] = 12345;
	numbers[3] = INT_MIN;
	numbers[4] = INT_MAX;
	i = 0;
	while (i < 5)
	{
		result = ft_itoa(numbers[i]);
		if (result)
		{
			printf("Número: %d - > String: %s\n", numbers[i], result);
			free(result);
		}
		else
		{
			printf("Error al convertir el número: %d\n", numbers[i]);
		}
		i++;
	}
	return (0);
}*/
