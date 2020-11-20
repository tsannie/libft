# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsannie <tsannie@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/11 08:07:49 by tsannie           #+#    #+#              #
#    Updated: 2020/11/16 12:44:16 by tsannie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a
CC			= gcc -Wall -Wextra -Werror
INCLUDE		= libft.h

RM			= rm -rf

SRC			= ft_isdigit.c ft_memmove.c ft_strncmp.c ft_atoi.c ft_isprint.c \
ft_memset.c ft_strnstr.c ft_bzero.c ft_memccpy.c ft_strchr.c ft_strrchr.c \
ft_isalnum.c ft_memchr.c ft_strlcat.c ft_tolower.c ft_isalpha.c ft_memcmp.c \
ft_strlcpy.c ft_toupper.c ft_isascii.c ft_memcpy.c ft_strlen.c ft_strdup.c \
ft_calloc.c ft_split.c ft_rev_int_tab.c ft_rev_char_tab.c ft_itoa.c \
ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_strjoin.c \
ft_strmapi.c ft_strtrim.c ft_substr.c

OBJ			= $(SRC:.c=.o)

BONUS		= ft_lstadd_back.c ft_lstlast.c \
ft_lstsize.c ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
ft_lstnew.c ft_lstmap.c

BONUS_OBJ	= $(BONUS:.c=.o)

all:		$(NAME)

$(NAME): 	$(OBJ)
			@ar -rc $(NAME) $(OBJ)
			@ranlib $(NAME)

bonus:		$(OBJ) $(BONUS_OBJ)
			@ar -rc $(NAME) ${BONUS_OBJ} $(OBJ)
			@ranlib $(NAME)

clean:
			$(RM) $(OBJ) $(BONUS_OBJ)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
