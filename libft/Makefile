# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/23 12:05:26 by trahman           #+#    #+#              #
#    Updated: 2020/10/08 11:50:33 by trahman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG =  -Wall -Wextra -Werror
OBJECTS = $(SRCS:.c=.o)
SRCS = ft_putchar.c ft_putchar_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c \
		ft_putstr_fd.c ft_strcat.c ft_strncat.c ft_strcmp.c ft_strncmp.c \
		ft_strcpy.c ft_strncpy.c ft_strlen.c ft_strdup.c ft_isdigit.c \
		ft_isalpha.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_bzero.c ft_memset.c ft_putendl.c ft_putendl_fd.c \
		ft_strequ.c ft_strnequ.c ft_strlcat.c ft_strstr.c ft_atoi.c \
		ft_itoa.c ft_strnstr.c ft_strchr.c ft_strrchr.c ft_memcpy.c \
		ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memalloc.c \
		ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c \
		ft_striteri.c ft_strmap.c ft_strmapi.c ft_strjoin.c ft_strsub.c \
		ft_strtrim.c ft_strsplit.c ft_lstnew.c ft_lstdel.c ft_lstdelone.c \
		ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_wordcount.c ft_intlen.c \
		get_next_line.c 
HEADER = libft.h

$(NAME):
	@gcc -c $(FLAG) $(SRCS) -I $(HEADER)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
	@echo "\033[32mBuilt library.\033[0m"

all: $(NAME)

clean: 
	@/bin/rm -f *.o
	@echo "\033[32mCleaned up object files.\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[32mCleaned up compiled files.\033[0m"

re: fclean all
.PHONY: all clean fclean re
