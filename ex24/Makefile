# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoumi <agoumihunter@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/04 22:41:07 by magoumi           #+#    #+#              #
#    Updated: 2018/10/05 14:21:10 by magoumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(wildcard srcs/*.c)
NAME = libft.a
HDIR = $(wildcard includes/*.h)
all: $(NAME) go clean
$(NAME):
	gcc -c $(HDIR) $(SRC) 
go:
	ar rc $(NAME) *.o
clean:
	rm -f *.o
fclean: clean
	rm -Rf $(NAME)
re: fclean all
