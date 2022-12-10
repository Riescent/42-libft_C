NAME =			libft.a

NAME_DEBUG =	libft_debug.a


SRCS_PATH =		srcs/

SRCS = 			char/ft_isalnum.c	\
				char/ft_isalpha.c	\
				char/ft_isascii.c	\
				char/ft_isdigit.c	\
				char/ft_isprint.c	\
				char/ft_isspace.c	\
				char/ft_toupper.c	\
				char/ft_tolower.c	\
\
				get_next_line/get_next_line_multi_fd.c			\
				get_next_line/get_next_line_utils_multi_fd.c	\
				get_next_line/get_next_line_utils.c				\
				get_next_line/get_next_line.c					\
\
				io/ft_putchar_fd.c					\
				io/ft_putendl_fd.c					\
				io/ft_putnbr_fd.c					\
				io/ft_putstr_fd.c					\
				io/ft_putstr_bonus.c				\
				io/printf/ft_printf.c				\
				io/printf/get_final_str.c			\
				io/printf/formating/format.c		\
				io/printf/formating/format_u_x.c	\
\
				linked_list/ft_lst_get_next_free_current.c	\
				linked_list/ft_lst_reverse_bonus.c			\
				linked_list/ft_lstadd_back_bonus.c			\
				linked_list/ft_lstadd_front_bonus.c			\
				linked_list/ft_lstclear_bonus.c				\
				linked_list/ft_lstdelone_bonus.c			\
				linked_list/ft_lstiter_bonus.c				\
				linked_list/ft_lstlast_bonus.c				\
				linked_list/ft_lstmap_bonus.c				\
				linked_list/ft_lstnew_bonus.c				\
				linked_list/ft_lstsize_bonus.c				\
\
				math/ft_angle_to_theta.c	\
\
				mem/ft_bzero.c		\
				mem/ft_calloc.c		\
				mem/ft_memchr.c		\
				mem/ft_memcmp.c		\
				mem/ft_memcpy.c		\
				mem/ft_memmove.c	\
				mem/ft_memset.c		\
\
				numbers/ft_swap/ft_swap_double.c	\
				numbers/ft_swap/ft_swap_int.c		\
				numbers/ft_swap/ft_swap_long.c		\
				numbers/ft_swap/ft_swap_size_t.c	\
				numbers/ft_swap/ft_swap_ssize_t.c	\
				numbers/ft_swap/ft_swap_uint.c		\
				numbers/ft_abs.c	\
				numbers/ft_atoi.c	\
				numbers/ft_atoll.c	\
				numbers/ft_itoa.c	\
\
				string/split/ft_free_split.c	\
				string/split/ft_split_set.c		\
				string/split/ft_split_size.c	\
				string/split/ft_split.c			\
				string/ft_strchr.c				\
				string/ft_strdup.c				\
				string/ft_striteri.c			\
				string/ft_strjoin.c				\
				string/ft_strlcat.c				\
				string/ft_strlcpy.c				\
				string/ft_strlen.c				\
				string/ft_strmapi.c				\
				string/ft_strncmp.c				\
				string/ft_strnstr.c				\
				string/ft_strrchr.c				\
				string/ft_strtrim.c				\
				string/ft_substr.c


HEADERS = 		${INCLUDES}ft_char.h			\
				${INCLUDES}ft_get_next_line.h	\
				${INCLUDES}ft_io.h				\
				${INCLUDES}ft_linked_list.h		\
				${INCLUDES}ft_math.h			\
				${INCLUDES}ft_mem.h				\
				${INCLUDES}ft_numbers.h			\
				${INCLUDES}ft_string.h			\
				${INCLUDES}libft.h

INCLUDES =		includes/


DIR_OBJS = 		build/

OBJS =			${addprefix ${DIR_OBJS},${SRCS:.c=.o}}

OBJS_DEBUG =	${addprefix ${DIR_OBJS},${SRCS:.c=_debug.o}}


FLAGS =			-Wall -Wextra -Werror -O3

DEBUG_FLAGS	=	-g3 -fsanitize=address


RMF =	 		rm -f

MKDIR = 		mkdir -p


all:			${DIR_OBJS}
				@${MAKE} ${NAME}

$(NAME):		${OBJS}
				ar rcs ${NAME} ${OBJS}

${DIR_OBJS}: Makefile
			@echo ${OBJS} | tr ' ' '\n'\
				| sed 's|\(.*\)/.*|\1|'\
				| sed 's/^/${MKDIR} /'\
				| sh -s
			@# Prints all OBJS. 1 per line
				@# Removes the .o file names
				@# Adds mkdir -p at start of each lines
				@# Executes the script (Creates all folders)

${DIR_OBJS}%.o: ${SRCS_PATH}%.c ${HEADERS} Makefile
				cc ${FLAGS} -I ${INCLUDES} -c $< -o $@

${DIR_OBJS}%_debug.o: ${SRCS_PATH}%.c ${HEADERS} Makefile
				cc ${FLAGS} -I ${INCLUDES} -c $< -o $@

clean:
				${RMF} ${OBJS} ${OBJS_DEBUG}

fclean:			clean
				${RMF} ${NAME} ${NAME_DEBUG}

re:				fclean
				${MAKE} all

re_debug:		fclean
				${MAKE} debug

echo_objs:
				@echo ${OBJS}

debug:			${DIR_OBJS}
				@${MAKE} ${NAME_DEBUG} FLAGS="${FLAGS} ${DEBUG_FLAGS}"

${NAME_DEBUG}: ${OBJS_DEBUG}
				ar rcs ${NAME_DEBUG} ${OBJS_DEBUG}

.PHONY:			all clean fclean re re_debug echo_objs debug
