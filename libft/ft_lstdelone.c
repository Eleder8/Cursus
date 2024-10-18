/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:36:36 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/17 09:36:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>
/*#include <stdio.h>*/
/*"Elimina y libera un solo nodo de una lista enlazada" utiliza una funcion*/
/* para liberar el contenido del nodo*/
/* Se llama a la funcion "del" pasando el contenido del nodo "lst->content" */
/*como argumento ("Esto asegura que el contenido del nodo se libere" */
/*"correctamente antes de eliminar el nodo en sí")*/
/*"Despues de liberar el contenido usa free para liberar el nodo"*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void	del_content(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*nodo;
	char	*content;
	int		i;

	content = (char *)malloc(30 * sizeof(char));
	if (!content)
		return (1);
	i = 0;
	while (i < 29)
	{
		content[i] = "Este contenido será eliminado"[i];
		i++;
	}
	content[i] = '\0';
	nodo = ft_lstnew(content);
	if (!nodo)
	{
		free(content);
		return (1);
	}
	ft_lstdelone(nodo, del_content);
	printf("El nodo y su contenido han sido eliminados correctamente.\n");
	return (0);
}*/
