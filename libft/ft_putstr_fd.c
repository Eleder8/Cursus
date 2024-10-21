/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:12:58 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 14:13:06 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*Se usa para escribir un string de caracteres 's' en un descriptor "fd" */
/*Si 's' tiene algo que escribir (no es "NULL") y "fd" es valido (0 o mayor)*/
/*usa "write" para enviar 's' a "fd" que indica donde se enviará */
/*('1' salida estandar, 2 salida de error estandar y "ft_strlen(s)" calcula */
/*la longitud de 's' para saber cuantos caracteres debe escribir*/

void	ft_putstr_fd(char *s, int fd)
{
	if (s && fd >= 0)
	{
		write(fd, s, ft_strlen(s));
	}
}
/*
int	main(void)
{
	char	*s;

	s = "hola, mundo!";
	ft_putstr_fd(s, 1);
	ft_putstr_fd("\n", 1);
	return (0);
}*/
