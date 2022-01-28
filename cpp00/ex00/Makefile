NAME	= megaphone
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
SRCS	= megaphone.cpp
OBJS	= $(SRCS:.cpp=.o)
RM		= rm -f

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all

.PHONY	: all clean fclean re
