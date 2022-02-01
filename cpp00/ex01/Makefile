NAME	= phbook
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
INC		= -I includes
SRCS	= main.cpp phbook.cpp Contact.cpp
OBJS	= $(SRCS:.cpp=.o)
RM		= rm -f

all		: $(NAME)

$(OBJS)		: %.o:%.cpp
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
