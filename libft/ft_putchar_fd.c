/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:11:28 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 14:11:34 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <unistd.h>*/
/*Se usa para escribir un solo caracter 'c' en un descriptor de archivo "fd"*/
/*Es útil para enviar caracteres a diferentes salidas dependiendo de "fd"*/

void	ft_putchar_fd(char c, int fd)
{
	if (fd >= 0)
		write(fd, &c, 1);
}
/*
int	main(void)
{
	char	c;

	c = 'A';
	ft_putchar_fd(c, 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
