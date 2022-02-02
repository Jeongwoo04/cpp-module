NAME		= Moar_brainz!
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
INC			= -I includes
SRCS		= main.cpp Zombie.cpp ZombieHorde.cpp
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
