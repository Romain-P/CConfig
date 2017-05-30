##
## Makefile for  in /home/romain.pillot/projects/dante/astar
## 
## Made by romain pillot
## Login   <romain.pillot@epitech.net>
## 
## Started on  Thu Apr 27 13:48:20 2017 romain pillot
## Last update Tue May 30 19:36:23 2017 romain pillot
##

CC	=	gcc

NAME	=	ghoulc

RM	=	rm -f

SRCS	=	src/main.c		\
		src/boolean.c		\
		src/integer.c		\
		src/string.c		\
		src/print.c		\
		src/read.c		\
		src/config.c		\
		src/key.c		\
		src/array.c		\
		src/array_converter.c	\
		src/array_integer.c	\
		src/array_string.c	\
		src/free.c		\
		src/str/str_countchar.c	\
		src/str/str_split.c	\
		src/str/str_reduce.c	\
		src/str/str_length.c	\
		src/str/str_duplicate.c	\
		src/str/str_equals.c	\
		src/str/str_contains.c	\
		src/nbr/nbr_parsestring.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Iinc -Werror -Wall -Wextra

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
