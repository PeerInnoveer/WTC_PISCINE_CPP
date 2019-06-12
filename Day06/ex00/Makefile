# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/03 16:48:52 by jaleman           #+#    #+#              #
#    Updated: 2019/06/11 12:44:10 by pvan-ren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert

SRCDIR	= ./src/
OBJDIR	= bin/

SRC		=

SRCPATH	:= $(addprefix $(SRCDIR), $(SRC))
OBJ		= $(SRC:%.cpp=%.o)
OBJPATH	:= $(addprefix $(OBJDIR), $(OBJ))

HEADERS	= ./includes/
CXX		= g++
FLAGS	= -Wall -Wextra -Werror
INC		= -I $(HEADERS)

all: $(NAME)

$(NAME): $(OBJPATH)
	$(CXX) -o $(NAME) $(SRCPATH) $(INC) $(FLAGS) $(LIBLINK)

$(OBJDIR)%.o: $(SRCDIR)%.cpp
	mkdir -p $(OBJDIR)
	$(CXX) $(FLAGS) -c -o $@ $< $(INC)

clean:
	rm -rf $(OBJPATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all