#Project setting
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I./include
LIBFT = ./Libft/libft.a

#Source File
SRCS = ./src/normalize_input.c	\
		./src/input_check.c 	\
		./src/parse_arguments.c \
		./src/list_utils.c		\
		./src/main.c

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