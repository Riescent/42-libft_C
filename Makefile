# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 19:13:43 by vfries            #+#    #+#              #
#    Updated: 2022/10/03 19:09:17 by vfries           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME =	libft.a
SRCS =	ft_isalpha.c \
		ft_toupper.c \
		ft_isdigit.c \
		ft_tolower.c \
		ft_isalnum.c \
		ft_strchr.c  \
		ft_isprint.c \
		ft_strncmp.c
OBJS =	${SRCS:.c=.o}
FLAG =	-Wall -Wextra -Werror

.PHONY:		.c.o ${NAME} clean fclean

.c.o:
			gcc ${FLAG} -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
