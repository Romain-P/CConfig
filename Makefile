##
## Makefile for  in /home/romain.pillot/projects/dante/astar
## 
## Made by romain pillot
## Login   <romain.pillot@epitech.net>
## 
## Started on  Thu Apr 27 13:48:20 2017 romain pillot
## Last update Sun May 28 16:21:34 2017 romain pillot
##

CC	=	gcc

NAME	=	ghoulc

RM	=	rm -f

SRCS	=	src/main.c		\
		src/print.c		\
		src/read.c		\
		src/config.c		\
		src/key.c		\
		src/array.c		\
		src/free.c		\
		src/str/str_countchar.c	\
		src/str/str_split.c	\
		src/str/str_reduce.c	\
		src/str/str_length.c	\
		src/str/str_duplicate.c	\
		src/str/str_equals.c	\
		src/nbr/nbr_parsestring.c

OBJS	=	$(SRCS:.c=.o)

CFLAGS	+=	-Iinc -g3 #-Werror -Wall -Wextra

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
