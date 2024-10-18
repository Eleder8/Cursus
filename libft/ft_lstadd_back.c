/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:12:38 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/08 10:31:52 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdlib.h>*/
/*#include <stdio.h>*/
/*"Añade un nuevo nodo al final de una lista enlazada" Si está vacia se*/
/*convierte en el primer y único nodo de la lista*/
/*Si la lista no está vacia usa "ft_lstlast" para encontrar el último nodo de */
/*la lista, luego conecta el nuevo nodo "new" al final de la lista haciendo */
/*que "last-next" apunte a "new"*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*nodo3;
	t_list	*lista;
	t_list	*temp;

	nodo1 = ft_lstnew("Nodo 1");
	nodo2 = ft_lstnew("Nodo 2");
	nodo3 = ft_lstnew("Nodo 3");
	lista = nodo1;
	ft_lstadd_back(&lista, nodo2);
	ft_lstadd_back(&lista, nodo3);
	temp = lista;
	while (temp != NULL)
	{
		printf("Contenido del nodo: %s\n", (char *)temp->content);
		temp = temp->next;
	}
	while (lista != NULL)
	{
		temp = lista->next;
		free(lista);
		lista = temp;
	}
	return (0);
}*/
