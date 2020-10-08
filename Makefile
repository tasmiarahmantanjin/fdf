# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: trahman <trahman@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/08 12:01:00 by trahman           #+#    #+#              #
#    Updated: 2020/10/08 12:14:21 by trahman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

FLAG =  -Wall -Wextra -Werror

SRCS = main.c

OBJECTS = $(SRCS:.c=.o)

INCLUDES = Libft/

LIBRARY = Libft/libft.a

HEADER = fdf.h

LIBDIR = Libft

MLX_LINK = /usr/local/lib/ -l mlx -framework OpenGL -framework AppKit

all: $(NAME)

$(NAME):
	@$(MAKE) -C $(LIBDIR)
	@gcc -c $(SRCS)
	@gcc  $(FLAG) $(LIBRARY) $(OBJECTS) -I $(INCLUDES) -o $(NAME) -L $(MLX_LINK)
	@echo "\033[32mBuilt library.\033[0m"

$(SRCS): $(HEADER)

clean:
	@$(MAKE) clean -C  $(LIBDIR)
	@/bin/rm -f $(OBJECTS)
	@echo "\033[32mCleaned up object files.\033[0m"

fclean: clean
	@$(MAKE) fclean -C $(LIBDIR)
	@/bin/rm -f $(NAME)
	@echo "\033[32mCleaned up compiled files.\033[0m"

re: fclean all

.PHONY: all clean fclean re
