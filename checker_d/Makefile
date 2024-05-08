CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes
SRC = srcs/get_next_line.c srcs/get_next_line_utils.c\
	srcs/main.c srcs/main2.c srcs/nrr.c srcs/qsort.c srcs/rr.c
OBJ = $(SRC:%.c=%.o)
PLIB = printf/libftprintf.a
LIB = printf/libft/libft.a
NAME = ../checker

all: $(NAME)

$(NAME): $(OBJ) $(PLIB) $(LIB)
	$(CC) $(CFLAGS) $(OBJ) $(PLIB) $(LIB) -o $(NAME)

$(PLIB):
	make -C printf

$(LIB):
	make -C printf/libft bonus

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C printf fclean

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
