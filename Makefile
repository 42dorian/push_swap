NAME = push_swap

SOURCE = src/push_swap.c \
			src/moves.c \
			src/helpers.c \
			src/store_and_sort.c \
			src/redix.c \
			src/pa_pb.c \
			src/sorting_helpers.c

HEADER = push_swap.h

CFLAGS = -Wall -Wextra -Werror -g


OBJECTS = $(SOURCE:.c=.o)

LIBFT_DIR = include/libft
FT_PRINTF_DIR = include/ft_printf

LIBFT = ${LIBFT_DIR}/libft.a
FT_PRINTF = ${FT_PRINTF_DIR}/libftprintf.a

CC = cc
RM = rm -f

all: ${NAME}

$(LIBFT):
		@make -C $(LIBFT_DIR)

$(FT_PRINTF):
		@make -C $(FT_PRINTF_DIR)

%.o: %.c push_swap.h libft/libft.h ft_printf/ft_printf.h
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${LIBFT} ${FT_PRINTF} ${OBJECTS}
	${CC} ${CFLAGS} ${OBJECTS} ${LIBFT} ${FT_PRINTF} -o ${NAME}

clean:
	make -C ${LIBFT_DIR} clean
	make -C ${FT_PRINTF_DIR} clean
	${RM} ${OBJECTS}

fclean: clean
	make -C ${LIBFT_DIR} fclean
	make -C ${FT_PRINTF_DIR} fclean
	${RM} ${NAME}

re: fclean all

make: make all

.PHONY: clean fclean re all