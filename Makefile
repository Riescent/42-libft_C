# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/07 19:13:43 by vfries            #+#    #+#              #
#    Updated: 2022/11/19 12:24:55 by vfries           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME =			libft.a

SRCS =			char/ft_isalnum.c	\
				char/ft_isalpha.c	\
				char/ft_isascii.c	\
				char/ft_isdigit.c	\
				char/ft_isprint.c	\
				char/ft_toupper.c	\
				char/ft_tolower.c	\
				i_o/ft_putchar_fd.c		\
				i_o/ft_putendl_fd.c		\
				i_o/ft_putnbr_fd.c		\
				i_o/ft_putstr_fd.c		\
				i_o/ft_putstr_bonus.c	\
				linked_list/ft_lst_reverse_bonus.c	\
				linked_list/ft_lstadd_back_bonus.c	\
				linked_list/ft_lstadd_front_bonus.c	\
				linked_list/ft_lstclear_bonus.c		\
				linked_list/ft_lstdelone_bonus.c	\
				linked_list/ft_lstiter_bonus.c		\
				linked_list/ft_lstlast_bonus.c		\
				linked_list/ft_lstmap_bonus.c		\
				linked_list/ft_lstnew_bonus.c		\
				linked_list/ft_lstsize_bonus.c		\
				mem/ft_bzero.c		\
				mem/ft_calloc.c		\
				mem/ft_memchr.c		\
				mem/ft_memcmp.c		\
				mem/ft_memcpy.c		\
				mem/ft_memmove.c	\
				mem/ft_memset.c		\
				string/ft_atoi.c		\
				string/ft_split.c		\
				string/ft_strchr.c		\
				string/ft_strdup.c		\
				string/ft_striteri.c	\
				string/ft_strjoin.c		\
				string/ft_strlcat.c		\
				string/ft_strlcpy.c		\
				string/ft_strlen.c		\
				string/ft_strmapi.c		\
				string/ft_strncmp.c		\
				string/ft_strnstr.c		\
				string/ft_strrchr.c		\
				string/ft_strtrim.c		\
				string/ft_substr.c		\
				ft_itoa.c

DIR_OBJS = 		./.objs/

OBJS =			${addprefix ${DIR_OBJS},${SRCS:.c=.o}}

FLAG =			-Wall -Wextra -Werror

RMF =	 		rm -f

INCLUDES =		headers/

HEADERS = 		headers/ft_char.h			\
				headers/ft_i_o.h			\
				headers/ft_linked_list.h	\
				headers/ft_mem.h			\
				headers/ft_string.h			\
				libft.h

MKDIR = 		mkdir -p

all:			${DIR_OBJS}
				@${MAKE} -j ${NAME}

$(NAME):		${OBJS}
				ar rcs ${NAME} ${OBJS}

${DIR_OBJS}:
			echo ${OBJS} | tr ' ' '\n'\
				| sed 's|\(.*\)/.*|\1|'\
				| sed 's/^/${MKDIR} /'\
				| sh -s
			# Prints all OBJS. 1 per line
				# Removes the .o file names
				# Adds mkdir -p at start of the line
				# Executes the script (Creates all folders)

${DIR_OBJS}%.o: %.c ${HEADERS} Makefile
				cc ${FLAG} -I ${INCLUDES} -c $< -o $@

clean:
				${RMF} ${OBJS} ${OBJS_BONUS}

fclean:			clean
				${RMF} ${NAME}

re:				fclean
				${MAKE} all

echo_objs:
				@echo ${OBJS}

.PHONY:			all clean fclean re echo_objs
