# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: d2435 <d2435@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/20 13:07:25 by dmalori           #+#    #+#              #
#    Updated: 2021/02/22 18:42:07 by d2435            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OS			=	$(shell uname)
NAME		=	libasm.a
SRCS		=	ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s
CFLAGS		=	-Wall -Wextra -Werror
CC			=	gcc
OBJS		=	$(SRCS:.s=.o)

ifeq ($(OS), Linux)
.s.o:
			nasm -f elf64 $<
else
.s.o:
			nasm -f macho64 $<
endif

all:		$(NAME)

$(NAME):	${OBJS} 
			ar rcs $(NAME) $(OBJS)

run:		$(NAME)
			$(CC) $(CFLAGS) libasm.c libasm_bis.c -L. -lasm -o test && ./d2435 && ./banner && ./test && rm test

v:			$(NAME)
			$(CC) $(CFLAGS) -no-pie libasm.c libasm_bis.c -L. -lasm -o test && ./d2435 && ./banner && valgrind ./test && rm test

clean:
			rm -rf $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re run v

