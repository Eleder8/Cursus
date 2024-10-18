/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:26:46 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/08 12:31:16 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdlib.h>*/
/*#include <stdio.h>*/
/*Se utiliza para "eliminar y liberar todos los nodos de una lista enlazada" */
/*"temp = (*lst)->next" se guarda el puntero al siguiente nodo en temp*/
/*"ft_lstdelone(*lst, del)" usa "ft_lstdelone" para eliminar el nodo actual y */
/* liberar su contenido con la funcion "del"*/
/*"*lst = temp" mueve el puntero "*lst" al siguiente nodo guardado en "temp"*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*list;
	char	*content1;
	char	*content2;
	char	*content3;

	content1 = (char *)malloc(30);
	content2 = (char *)malloc(30);
	content3 = (char *)malloc(30);
	if (!content1 || !content2 || !content3)
		return (1);
	list = ft_lstnew(content1);
	list->next = ft_lstnew(content2);
	list->next->next = ft_lstnew(content3);
	ft_lstclear(&list, del_content);
	if (!list)
		printf("Todos los nodos han sido eliminados\n");
	return (0);
}*/
