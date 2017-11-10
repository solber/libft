# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wnoth <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 08:34:21 by wnoth             #+#    #+#              #
#    Updated: 2017/11/09 09:59:51 by wnoth            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CFLAGS		= -Wall -Werror -Wextra -I. -c
FILES		= ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_strlen.c \
				ft_memmove.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strcpy.c \
				ft_strdup.c \
				ft_strcat.c \
				ft_strncat.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strstr.c \
				ft_strnstr.c \
				ft_strcmp.c \
				ft_strncmp.c \
				ft_atoi.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strncpy.c \
				ft_isascii.c \
				ft_memalloc.c \
				ft_memdel.c \
				ft_strnew.c \
				ft_strdel.c \
				ft_strclr.c \
				ft_striter.c \
				ft_striteri.c \
				ft_strmap.c \
				ft_strmapi.c \
				ft_strequ.c \
				ft_strnequ.c \
				ft_strsub.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_strsplit.c \
				ft_putchar.c \
				ft_putstr.c \
				ft_putnbr.c
OBJ			= $(FILES:%.c=%.o)
 
all: $(NAME)
 
$(OBJ): $(FILES)
	@echo "\x1B[31mCreating .o ..."
	@gcc $(CFLAGS) $(FILES)
	@echo "\x1B[32mDone !" 

$(NAME): $(OBJ)
	@echo "\x1B[31mCreating .a ..."
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\x1B[32mDone !" 

clean:
	@echo "\x1B[31mcleaning .o ..."
	@rm -f $(OBJ)
	@echo "\x1B[32mDone !" 
 
fclean: clean
	@echo "\x1B[31mCreating .a ..."
	@rm -f $(NAME)
	@echo "\x1B[32mDone !"

re: fclean all
