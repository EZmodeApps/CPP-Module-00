NAME = megaphone

SRCS = megaphone.cpp

OBJS = ${SRCS:.c=.o}

FLAGS	= -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re