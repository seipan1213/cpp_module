NAME		=	test
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -MMD -MP
SRCS		=	main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp
OBJS		=	$(SRCS:.cpp=.o)
DEPS		=	$(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

-include $(DEPS)

.PHONY: all fclean clean re
