/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:45:01 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/08 10:09:09 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdlib.h>*/
/*#include <stdio.h>*/
/*"Devuelve el ultimo nodo de una lista enlazada" Si esta vacia devuelve "NULL*/
/*"lst->next" mientras "lst" no sea "NULL" avanza al siguiente nodo en cada*/
/*vuelta del bucle. Cuando acaba el bucle "lst" esta en el ultimo nodo*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*lista;
	t_list	*temp;

	nodo1 = ft_lstnew("primer nodo");
	nodo2 = ft_lstnew("segundo nodo");
	nodo3 = ft_lstnew("tercer nodo");
	lista = nodo1;
	nodo1->next = nodo2;
	nodo2->next = nodo3;
		if (ft_lstlast(lista) != NULL)
		printf("Último nodo: %s\n", (char *)ft_lstlast(lista)->content);
	temp = lista;
	while (temp != NULL)
	{
		temp = lista->next;
		free(lista);
		lista = temp;
	}
	return (0);
}*/
