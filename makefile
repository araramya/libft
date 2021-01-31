# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: araramya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/30 13:36:16 by araramya          #+#    #+#              #
#    Updated: 2021/01/30 13:50:00 by araramya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= $(shell find *.c)
#BONUSES 	= #$(shell find "bonuses" -name "*.c")
OBJS		= ${SRCS:.c=.o}
#BONUS_OBJS =  #${BONUSES:.c=.o}
NAME		= libft.a
CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror
AR			= ar csr

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME) : ${OBJS}
	${AR} ${NAME} ${OBJS}

# bonus : ${BONUS_OBJS}
#	${AR} libft.a ${BONUS_OBJS}


all : ${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o

