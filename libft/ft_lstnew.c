/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eloizaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 12:33:48 by eloizaga          #+#    #+#             */
/*   Updated: 2024/10/07 13:25:10 by eloizaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*#include <stdio.h>*/
/*Crea un nuevo "nodo" de una lista enlazada (el "nodo" se compone de 2 cosas*/
/*"datos(content)" que es lo que queremos guardar en el "nodo" y tambien */
/*"puntero al siguiente nodo(next)" dice cual es el siguiente nodo de la lista*/
/*Se usa "malloc" para reservar espacio de memoria para el nuevo nodo*/
/*"new_nodo->content = content" guarda el dato que se quiere poner en el nodo*/
/*"new_nodo->next = NULL" "next" es un espacio en el nodo para enlazar otro*/
/*nodo. Se pone "NULL" ya que al crear el nodo no está conectado a otro nodo*/
t_list	*ft_lstnew(void *content)
{
	t_list	*new_nodo;

	new_nodo = (t_list *)malloc(sizeof(t_list));
	if (!new_nodo)
		return (NULL);
	new_nodo->content = content;
	new_nodo->next = NULL;
	return (new_nodo);
}
/*
int	main(void)
{
	t_list	*nodo;
	char	*content;

	content = "Hola, mundo!";
	nodo = ft_lstnew(content);
	if (nodo == NULL)
	{
		printf("Error al crear el nodo\n");
		return (1);
	}
	else
	{
		printf("Contenido del nodo: %s\n", (char *)nodo->content);
	}
	free(nodo);
	return (0);
}*/
