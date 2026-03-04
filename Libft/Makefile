# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rayan <rayan@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/14 16:50:48 by rayan             #+#    #+#              #
#    Updated: 2025/11/11 19:26:33 by rayan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Project setting
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

#Source File
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		ft_isascii.c ft_isprint.c ft_strlen.c \
		ft_toupper.c ft_tolower.c ft_memset.c \
		ft_bzero.c ft_memcpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlcpy.c \
		ft_strlcat.c ft_strchr.c ft_strrchr.c \
		ft_strncmp.c ft_strnstr.c ft_strdup.c \
		ft_calloc.c ft_atoi.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c \
		ft_itoa.c ft_strmapi.c ft_striteri.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

#Default Target
all: $(NAME)

#Build static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

#Compile .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	
#Cleaning
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
