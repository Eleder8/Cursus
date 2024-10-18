/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:33:30 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/08 09:34:32 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdlib.h>*/
/*#include <stdio.h>*/
/*"Cuenta cuantos nodos hay en la lista enlazada" recorriendola de principio */
/*a fin contando cada nodo que encuentra*/
/*Comienza con "count = 0" porque al principio no ha contado ningún nodo*/
/*"lst = lst->next" mueve "lst" al siguiente nodo en la lista*/
/*Una vez que "lst" llega al final de la lista("NULL") el bucle termina y */
/*la función devuelve el "numero total de nodos contados"*/

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
int	main(void)
{
	t_list	*lista;
	t_list	*temp;

	lista = ft_lstnew("nodo 1");
	ft_lstadd_front(&lista, ft_lstnew("nodo 2"));
	ft_lstadd_front(&lista, ft_lstnew("nodo 3"));
	printf("Nodos contados en la lista: %d\n", ft_lstsize(lista));
	while (lista)
	{
		temp = lista->next;
		free(lista);
		lista = temp;
	}
	return (0);
}*/
