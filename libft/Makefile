# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 12:53:40 by fnovais-          #+#    #+#              #
#    Updated: 2022/11/17 13:02:50 by fnovais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	 ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	 ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c \
	 ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	 ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_striteri.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \
	 ft_printf.c ft_putchar.c ft_putnbr.c ft_putnbr_lowhexa.c ft_putnbr_unsigned.c ft_putnbr_upperhexa.c \
	 ft_putptr.c ft_putstr.c ft_itoa_printf.c \

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		ft_lstclear.c ft_lstiter.c ft_lstmap.c \


BONUS_OBJ = $(BONUS:.c=.o)

OBJ = $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
			ar rcs $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ) $(BONUS_OBJ)

fclean:		clean
		$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(NAME) $(BONUS_OBJ)
			ar rcs $(NAME) $(BONUS_OBJ)
