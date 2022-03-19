NAME	=	phonebook

SRCS	=	contact.cpp phonebook.cpp main.cpp

FLAGS	=	-Wall -Wextra -Werror

HEARER	=	contact.h phonebook.h

all:	$(NAME)

$(NAME):
	clang++ $(SRCS) -I. -o $(NAME)

clean:
	rm -f $(NAME)

re:	clean all

.PHONY:	all clean fclean re