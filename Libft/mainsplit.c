/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainsplit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 10:35:52 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 11:30:21 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("Hola Mundo programador", ' ');
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("Palabra %d: '%s'\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	result = ft_split("", ' ');
	if (!result)
		printf("String vacio: Correcto ft_split devuelve NULL\n");
	else
	{
		printf("String vacio: Error, ft_split no devolvió NULL\n");
		free(result);
	}
	return (0);
}
