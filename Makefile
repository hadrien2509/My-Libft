# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hgeissle <hgeissle@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/05 14:11:25 by hgeissle          #+#    #+#              #
#    Updated: 2022/10/11 13:37:07 by hgeissle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BASE =  ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
        ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

BONUS = ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \

CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f
OBJS = ${BASE:.c=.o}
OBJS_BONUS = ${BONUS:.c=.o}

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(AR) ${NAME} ${OBJS}

all: ${OBJS} ${OBJS_BONUS}
	$(AR) ${NAME} ${OBJS} ${OBJS_BONUS}

bonus: ${OBJS_BONUS}
		$(AR) ${NAME} ${OBJS_BONUS}

clean:
		${RM} ${OBJS} ${OBJS_BONUS}

fclean: clean
		${RM} ${NAME}

re: fclean ${NAME}

reall : fclean all

rebonus : fclean bonus

.PHONY: all bonus clean fclean re reall rebonus


