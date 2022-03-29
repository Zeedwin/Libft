# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 16:33:52 by jgirard-          #+#    #+#              #
#    Updated: 2022/03/27 23:19:16 by jgirard-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_strlen.c ft_strlcat.c ft_atoi.c ft_isdigit.c ft_isalpha.c ft_isprint.c ft_isascii.c ft_strlcpy.c ft_split.c
OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJ}
	ar rc ${NAME} ${OBJ}
	
clean:
	rm -f ${OBJ}


.PHONY: clean 
