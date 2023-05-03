# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agallell <agallell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 12:53:17 by agallell          #+#    #+#              #
#    Updated: 2023/05/03 12:53:19 by agallell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

CFLAGS = -Wall -Werror -Wextra

SRCS = mandelbrot.c julia.c burning_ship.c main.c other_funcs.c ft_strcmp.c \
		ft_strdup.c error_and_exit.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(SRCS)
		cc $(CFLAGS) -lmlx -framework OpenGL -framework AppKit $(SRCS) -o $(NAME)

clean :
		@rm -rf $(OBJS)

fclean : clean
		@rm -rf $(NAME)

re :	fclean all
