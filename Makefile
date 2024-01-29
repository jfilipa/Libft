# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfilipa- <jfilipa-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 16:14:51 by jfilipa-          #+#    #+#              #
#    Updated: 2023/11/06 19:57:42 by jfilipa-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =	ft_atoi.c ft_isascii.c ft_memcmp.c ft_putendl_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c \
		ft_bzero.c ft_isdigit.c ft_memcpy.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c \
		ft_calloc.c ft_isprint.c ft_memmove.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_tolower.c \
		ft_isalnum.c ft_itoa.c ft_memset.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c \
		ft_isalpha.c ft_memchr.c ft_putchar_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)

BONUS_OBJ = $(BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra


all : $(NAME)

$(NAME) : $(OBJS)
	ar -cq $(NAME) $(OBJS)

bonus : $(OBJS) $(BONUS_OBJ)
	ar -cq $(NAME) $(BONUS_OBJ) $(OBJS)

clean :
	rm -rf $(OBJS) $(BONUS_OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

fnorm :
	python3 -m c_formatter_42 $(SRCS) *.h
	norminette $(SRCS) *.h
	python3 -m c_formatter_42 $(BONUS) *.h
	norminette $(BONUS) *.h