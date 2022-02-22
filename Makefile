# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcriston <bcriston@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 18:33:17 by tshandi           #+#    #+#              #
#    Updated: 2021/12/02 19:55:14 by bcriston         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf_c.c ft_printf_di.c ft_printf_p.c ft_itoa.c\
			ft_printf_s.c ft_printf_u.c ft_printf_x.c ft_strlen.c ft_printf.c ft_putchar.c ft_putstr.c


HEADER	=	ft_printf.h
OBJ		=	${SRCS:%.c=%.o}
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I${HEADER}
LIBC	=	ar rcs
RM		=	rm -f


$(NAME)	:	${OBJ} ${HEADER}
	${LIBC} ${NAME} $?
	
%.o		:	%.c ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

all		:	${NAME}

clean	:
	${RM} ${OBJ} 

fclean	:	clean
	${RM} ${NAME}

re		:	fclean all

.PHONY	:	all clean fclean re
