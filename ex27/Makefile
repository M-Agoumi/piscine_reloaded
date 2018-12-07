# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoumi <agoumihunter@gmail.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/05 17:30:45 by magoumi           #+#    #+#              #
#    Updated: 2018/10/05 18:44:40 by magoumi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
 
NAME = ft_display_file
all: $(NAME) clean
$(NAME):
	@gcc -Werror -Wall -Wextra -c *.c
	@gcc -Werror -Wall -Wextra -o $(NAME) *.o

clean:
	@rm -rf *.o *.gch
fclean: clean
	@rm $(NAME)
re: fclean all
