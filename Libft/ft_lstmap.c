/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:14:03 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/08 14:44:30 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdlib.h>*/
/*#include <stdio.h>*/
/*"Crea una nueva lista enlazada aplicando una función a cada nodo de una"*/
/*"lista existente"*/
/*"Si hay algún error al crear un nodo, limpia y libera la memoria de la"*/
/*"nueva lista"*/
/*"new_nodo = ft_lstnew(f(lst->content))" Aplica la funcion 'f' al contenido*/
/*del nodo actual y crea un nuevo nodo con el resultado*/
/*Si new_nodo es NULL("!new_nodo") usa "ft_lstclear(&new_list, del)" para*/
/*limpiar la nueva lista que se creaba para liberar toda la memoria asignada*/
/*"ft_lstadd_back(&new_list, new_nodo)" añade el nuevo nodo al final de la */
/*nueva lista*/
/*
void	*to_upper(void *content)
{
	char	*str;
	char	*new_str;
	int		i;

	str = (char *)content;
	new_str = (char *)malloc(ft_strlen(str) + 1);
	if (!new_str)
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = ft_toupper(str[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

void	del_content(void *content)
{
	free(content);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_nodo;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_nodo = ft_lstnew(f(lst->content));
		if (!new_nodo)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_nodo);
		lst = lst->next;
	}
	return (new_list);
}
/*
int	main(void)
{
	t_list	*lista;
	t_list	*new_lista;
	t_list	*temp;

	lista = ft_lstnew(ft_strdup("primer nodo"));
	lista->next = ft_lstnew(ft_strdup("segundo nodo"));
	lista->next->next = ft_lstnew(ft_strdup("tercer nodo"));
	new_lista = ft_lstmap(lista, to_upper, del_content);
	temp = new_lista;
	while (temp)
	{
		printf("Contenido: %s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&new_lista, del_content);
	ft_lstclear(&lista, del_content);
	return (0);
}*/
