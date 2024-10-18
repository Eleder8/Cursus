/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:36:00 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 11:45:09 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Permite modificar los caracteres del string directamente porque 'f' recibe*/
/*un puntero a cada caracter "char *c"(cualquier cambio que 'f' haga a "*c" se*/
/*reflejará directamente en el string original 's'*/
/*"to_upper" convierte un caracter en mayúscula, ignorando el indice "index"*/
/* para evitar advertencias del compilador y usando "ft_toupper" sobre 'c'*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	to_upper(unsigned int index, char *c)
{
	(void)index;
	*c = ft_toupper(*c);
}
/*
int	main(void)
{
	char	s[12];

	s[0] = 'h';
	s[1] = 'o';
	s[2] = 'l';
	s[3] = 'a';
	s[4] = ' ';
	s[5] = 'm';
	s[6] = 'u';
	s[7] = 'n';
	s[8] = 'd';
	s[9] = 'o';
	s[10] = '\0';
	ft_striteri(s, to_upper);
	printf("Resultado: %s\n", s);
	return (0);
}*/
