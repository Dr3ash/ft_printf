# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alenzini <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/02 18:07:38 by alenzini          #+#    #+#              #
#    Updated: 2022/11/02 18:18:23 by alenzini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_printf.c \
		print_utils1.c \
		print.c \
		print_utils2.c

BSRCS = ft_printf_bonus.c \
		ft_printf_utils_bonus.c \
		get_bonus.c \
		print_bonus.c \
		print_utils_bonus.c \
		print_c_bonus.c \
		print_d_bonus.c \
		print_p_bonus.c \
		print_s_bonus.c \
		print_u_bonus.c \
		print_x_bonus.c \
		width_bonus.c

ifndef WITH_BONUS
	OBJS =	${SRCS:.c=.o}
else
	OBJS =	${BSRCS:.c=.o}
endif

NAME =	libftprintf.a

INCLUDES = ./

LIB_PATH = ./libft/

CFLAGS =	-Wall -Wextra -Werror

all:		${NAME}

${NAME}:	${OBJS}
			make all -C ${LIB_PATH}
			cp libft/libft.a ${NAME}
			ar rc ${NAME} ${OBJS}

bonus :
			make WITH_BONUS=1 all

.c.o:
			gcc ${CFLAGS} -I${INCLUDES} -c $< -o ${<:.c=.o}

clean:
			rm -f ${SRCS:.c=.o} ${BSRCS:.c=.o}
			make fclean -C ${LIB_PATH}

fclean:		clean
			rm -f ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re
