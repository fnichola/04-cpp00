# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnichola <fnichola@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 18:01:32 by fnichola          #+#    #+#              #
#    Updated: 2022/09/13 06:09:30 by fnichola         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address

SRCS = main.cpp \
	Contact.cpp \
	Phonebook.cpp \
	sample_data.cpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.c=.d)

all: $(NAME)

%.o: %.c
	$(CXX) $(CXXFLAGS) -MMD -MP -I includes -o $@ -c $<
	
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -I includes -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus

-include $(DEPS)
