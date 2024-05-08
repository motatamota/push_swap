CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCDIR = srcs
INCDIR = includes
SRC = srcs/ex_push_swap.c\
		srcs/ex_push_swap2.c\
		srcs/ex_push_swap3.c\
		srcs/ex_push.c\
		srcs/ex_push2.c\
		srcs/main.c\
		srcs/push_swap_2.c\
		srcs/push_swap.c\
		srcs/push.c\
		srcs/push2.c\
		srcs/qsort.c
BOUNUS = checker
OBJ = $(SRC:%.c=%.o)
PLIB = printf/libftprintf.a
CHECKER = checker
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ) $(PLIB)
	$(CC) $(CFLAGS) $(OBJ) $(PLIB) -o $(NAME)

$(PLIB):
	make -C printf

bonus:
	make -C checker_d

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	make -C checker_d clean
	make -C printf fclean
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f checker

re: fclean all

.PHONY: all clean fclean re