/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:44:13 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 09:10:31 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Compara los primeros 'n' bytes de los bloques de memoria a los que */
/*apuntan "s1 y s2".Convierte los punteros "s1 y s2" a "unsigned char *" para*/
/* trabajar byte a byte*/
/*Si los bloques son iguales devuelve '0', si son diferentes devuelve la*/
/*diferencia entre el primer byte diferente de "s1 y s2"*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	str1[] = "Hola Mundo";
	const char	str2[] = "Holanda";
	int			result;

	result = ft_memcmp(str1, str2, 10);
	if (result == 0)
		printf("Los 10 primeros bytes son iguales.\n");
	else if (result < 0)
		printf("Los 10 primeros bytes de '%s' son menores que los de '%s'.\n",
			str1, str2);
	else
		printf("Los 10 primeros bytes de '%s' son mayores que los de '%s'.\n",
			str1, str2);
	result = ft_memcmp(str1, str2, 4);
	if (result == 0)
		printf("Los 4 primeros bytes son iguales.\n");
	else if (result < 0)
		printf("Los 4 primeros bytes de '%s' son menores que los de '%s'.\n",
			str1, str2);
	else
		printf("Los 4 primeros bytes de '%s' son mayores que los de '%s'.\n",
			str1, str2);
	return (0);
}*/
