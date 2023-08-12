# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabastid <pabastid@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 13:31:35 by pabastid          #+#    #+#              #
#    Updated: 2023/07/24 12:32:47 by pabastid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT			=	client
SERVER			=	server

CLIENT_SRC		=	client.c
SERVER_SRC		=	server.c

Lib_DIR			=	./includes/libft
Lib				=	$(Lib_DIR)/libft.a
Printf_DIR		=	./includes/printf
Printf			=	$(Printf_DIR)/libftprintf.a

RM				=	rm -f
CFALGS			=	-Wall -Wextra -Werror -I ./includes

all:
	@$(MAKE) -sC $(Lib_DIR)
	@$(MAKE) -sC $(Printf_DIR)
	@$(MAKE) $(CLIENT)
	@$(MAKE) $(SERVER)

$(CLIENT): $(CLIENT_SRC) $(Lib)
	@$(CC) $(CFLAGS) $(CLIENT_SRC) $(Lib) $(Printf) -o $(CLIENT)

$(SERVER): $(SERVER_SRC) $(Lib) $(Printf)
	@$(CC) $(CFLAGS) $(SERVER_SRC) $(Lib) $(Printf) -o $(SERVER)

clean:
	@$(MAKE) clean -sC $(Lib_DIR)
	@$(MAKE) clean -sC $(Printf_DIR)

fclean:
	@$(MAKE) clean
	@$(RM) $(CLIENT) $(SERVER)

re:
	@$(MAKE) fclean
	@$(MAKE)

.PHONY: all clean flclean 
