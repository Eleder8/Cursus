# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 13:36:12 by eloizaga          #+#    #+#              #
#    Updated: 2024/10/10 11:18:33 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

#Define el compilador (en este caso gcc)
CC = gcc

#Opciones de compilación para que el compilador muestre errores y advertencias
#-Wall(mensajes de advertencia)-Wextra(advertencias adicionales)-Werror(trata advertencias como errores) 
CFLAGS = -Wall -Wextra -Werror

#Archivos fuente ('.c') que contienen las funciones obligatorias
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

#Archivos fuente (.c) que contienen las funciones bonus
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
ft_lstclear.c ft_lstiter.c ft_lstmap.c  \
		
      

#Genera archivos objeto ('.o') a partir de los archivos fuente ('.c')
OBJ = $(SRC:.c=.o)

#Genera archivos objeto ('.o')
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

#Reglas

#all ejecuta la creación de la librería $(NAME) es decir libft.a
all: $(NAME)

#Regla para crear 'libft.a'a partir de los archivos objeto ('.o')
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
#'ar'crea y modifica archivos de la biblioteca
#'r' reemplaza archivos en la biblioteca
#'c' crea la biblioteca si no existe
#'s' crea un índice para facilitar la busqueda en la biblioteca

#Regla que compila los archivos bonus. Se crea 'libft.a' pero con los objetos de los bonus incluidos
bonus: $(OBJ) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJ) $(BONUS_OBJS)

#compilar los archivos.c en archivos.o(objetos)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#Elimina los archivos objeto
clean:
	rm -f $(OBJ) $(BONUS_OBJS)

#Limpiar archivos objeto y la librería estática
fclean: clean
	rm -f $(NAME)

#Recompilar desde cero
re: fclean all
