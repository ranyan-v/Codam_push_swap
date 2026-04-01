#Project setting
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./include
LIBFT = ./Libft/libft.a

#Source File
SRCS = ./src/push_swap.c		\
		./src/normalize_input.c	\
		./src/input_check.c 	\
		./src/utils.c 			\
		./src/stack_utils.c		\
		./src/swap.c			\
		./src/push.c			\
		./src/rotate.c			\
		./src/reverse_rotate.c	\
		./src/sort_small.c		\
		./src/sort_big.c		\
		./main.c

OBJS = $(SRCS:.c=.o)

#Default Target
all: $(NAME)

#Build executable
$(NAME): $(LIBFT) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

#Build libft
$(LIBFT):
	$(MAKE) -C ./Libft

#Compile .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
	
#Cleaning
clean:
	$(MAKE) clean -C ./Libft
	rm -f $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./Libft
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re