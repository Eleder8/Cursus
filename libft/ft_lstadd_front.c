/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:26:07 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/08 09:02:27 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdlib.h>*/
/*#include <stdio.h>*/
/*Se usa para añadir un nuevo "nodo" al incio de una lista enlazada "lst"*/
/*Verifica que "lst"(lista) y "new"(nuevo nodo) no sean "NULL"*/
/*"new->next = *lst" El nuevo nodo("new") debe apuntar al que antes era el */
/*primer nodo de la lista ("*lst")*/
/*"*lst = new" mueve el puntero de inicio de la lista para que apunte al */
/*nuevo nodo "new" convirtiendolo en el primer nodo de la lista*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
int	main(void)
{
	t_list	*nodo1;
	t_list	*nodo2;
	t_list	*lista;
	char	*content1;
	char	*content2;

	content1 = "Primer nodo";
	content2 = "Nuevo nodo";
	nodo1 = ft_lstnew(content1);
	nodo2 = ft_lstnew(content2);
	lista = nodo1;
	ft_lstadd_front(&lista, nodo2);
	printf("Contenido primer nodo: %s\n", (char *)lista->content);
	printf("Contenido segundo nodo: %s\n", (char *)lista->next->content);
	free(nodo1);
	free(nodo2);
	return (0);
}*/
