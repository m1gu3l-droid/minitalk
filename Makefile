# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 18:37:52 by fnovais-          #+#    #+#              #
#    Updated: 2023/02/12 18:54:20 by fnovais-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

FLAGS = -Wall -Wextra -Werror

LIBFT = ./libft/libft.a
FT_PRINTF = ./ft_printf/libftprintf.a

RM = rm -f

SERVER = server
CLIENT = client

SV_SRCS = server.c
SV_OBJ = $(SV_SRCS:.c=.o)

CL_SRCS = client.c
CL_OBJ = $(CL_SRCS:.c=.o)

all: $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C ./libft
$(FT_PRINTF):
	$(MAKE) -C ./ft_printf

$(SERVER): $(SV_OBJ) $(LIBFT) $(FT_PRINTF)
	$(CC) $(FLAGS) $(SV_OBJ) $(LIBFT) $(FT_PRINTF) -o server
$(CLIENT): $(CL_OBJ) $(LIBFT) $(FT_PRINTF)
	$(CC) $(FLAGS) $(CL_OBJ) $(LIBFT) $(FT_PRINTF) -o client

clean:
	$(MAKE) clean -C ./libft
	$(MAKE) clean -C ./ft_printf
	$(RM) $(SV_OBJ) $(CL_OBJ)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(MAKE) fclean -C ./ft_printf
	$(RM) $(SV_OBJ) $(CL_OBJ)

re: fclean all
