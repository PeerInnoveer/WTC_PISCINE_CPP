# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 12:15:11 by pvan-ren          #+#    #+#              #
#    Updated: 2019/06/05 12:28:05 by pvan-ren         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Name of the program.
NAME     := phonebook

# Sources and objects.
SRCS     := pb.class.cpp addContact.cpp showContacts.cpp main.cpp
HDRS     := pb.class.hpp
OBJS     := $(SRCS:.cpp=.o)

# Define all the compiling flags.
CXX      := g++
CXXFLAGS := -Wall -Werror -Wextra

# Compile and create everything.
all: $(NAME)

# Compile the program with the objects.
$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

# This won't run if the source files don't exist or are not modified.
%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# Rule to remove all the object files.
clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

# Rule to remove everything that has been created by the makefile.
fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

# Rule to re-make everything.
re:     fclean all

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all clean fclean format re