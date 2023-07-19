# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: afatir <afatir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/09 09:49:14 by afatir            #+#    #+#              #
#    Updated: 2023/07/09 10:27:12 by afatir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone
CFLAGS	=  -Wall -Werror -Wextra -std=c++98
CC		=  c++
SRCS	= megaphone.cpp

all : $(NAME)
$(NAME) : $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS)  -c  $< -o $@
clean:
	@rm -f $(MOBJS) 

fclean:	clean
	@rm -f $(NAME)

re:	fclean all