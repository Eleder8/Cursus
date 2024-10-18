/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:00:01 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 12:17:37 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
/*Se usa para escribir un string de texto 's' seguido de "\n" en un descriptor*/
/*de archivo "fd"*/
/*Verifica si 's' no es "NULL" y que "fd" sea 0 o mayor*/
/*"ft_putstr_fd(s, fd)" llama a "ft_putstr_fd" para escribir 's' en "fd"*/
/*despues de imprimir 's' usa "write" para agregar el "\n"*/

void	ft_putendl_fd(char *s, int fd)
{
	if (s && fd >= 0)
	{
		ft_putstr_fd(s, fd);
		write(fd, "\n", 1);
	}
}

int	main(void)
{
	char	*s;

	s = "Hola, mundo!";
	ft_putendl_fd(s, 1);
	ft_putstr_fd("Comprobación del salto de linea de ft_putendl_fd\n", 1);
	return (0);
}
