/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:18:54 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 12:19:18 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*Se usa para imprimir un Nº entero "int" en un descriptor de archivo "fd"*/
/*Puede manejar Nº negativos y el Nº entero mas pequeño "INT_MIN"*/
/*Esta funcion es "recursiva" ya que se llama a si misma para imprimir cada */
/*dígito de izquierda a derecha*/
/*Si "n >= 10" usa "ft_putnbr_fd" con "n / 10" usa la recursividad para ir */
/*descomponiendo el Nº y poder imprimir cada dígito de izquierda a derecha*/
/*Despues de la recursion, se imprime el digito actual "n % 10" extrayendo */
/* el digito del string "0123456789" que asegura imprimir el digito bien*/

void	ft_putnbr_fd(int n, int fd)
{
	if (n == INT_MIN)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(-123456, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(INT_MIN, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(INT_MAX, 1);
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1);
	write(1, "\n", 1);
	return (0);
}*/
