NAME		= Animal
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INC			= -I includes
SRCS		= Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp main.cpp
OBJS		= $(SRCS:.cpp=.o)
RM			= rm -f

all		: $(NAME)

$(OBJS)		: %.o:%.cpp
	$(CXX) $(CXXFLAGS) $(INC) -c $< -o $@

$(NAME)	: $(OBJS)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
