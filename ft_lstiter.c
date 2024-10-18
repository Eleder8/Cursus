/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:39:01 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/08 13:09:00 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdlib.h>*/
/*#include <stdio.h>*/
/*"Recorre una lista enlazada y aplica una función a cada elemento"*/
/*En este caso será "print_content" que imprime el contenido de cada nodo*/
/*"f(lst->content)"aplica la funcion 'f' al contenido de cada nodo de la lista*/
/*"print_content" imprime el contenido del nodo
 * "create_content" asigna memoria para un string y copia el texto*/
/*proporcionado en ella*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

char	*create_content(const char *text)
{
	char	*content;
	int		i;

	content = (char *)malloc(30);
	if (!content)
		return (NULL);
	i = 0;
	while (text[i] && i < 29)
	{
		content[i] = text[i];
		i++;
	}
	content[i] = '\0';
	return (content);
}

int	main(void)
{
	t_list	*list;
	char	*content1;
	char	*content2;
	char	*content3;

	content1 = create_content("Contenido 1");
	content2 = create_content("Contenido 2");
	content3 = create_content("Contenido 3");
	if (!content1 || !content2 || !content3)
		return (1);
	list = ft_lstnew(content1);
	list->next = ft_lstnew(content2);
	list->next->next = ft_lstnew(content3);
	ft_lstiter(list, print_content);
	ft_lstclear(&list, free);
	return (0);
}*/
