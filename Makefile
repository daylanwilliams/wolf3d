# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dwilliam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 15:24:58 by dwilliam          #+#    #+#              #
#    Updated: 2018/06/30 12:19:41 by dwilliam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = wolf3d

SRC = src/*.c

BIN = $(SRC:.c=.o)

HEAD = includes/wolf3d.h

FLAGS = -Wall -Werror -Wextra

LIB = -L libft -lft

TFLAGS = -lSDL2 -I includes/SDL2/ -L ~/lib -I includes/

all: $(NAME)

$(NAME):
	gunzip -c SDL2-2.0.5.tar.gz | tar xf -
	cd SDL2-2.0.5; \
	mkdir build; \
	cd build; \
	../configure; \
	make
	mkdir -p ~/lib/
	cp SDL2-2.0.5/build/build/.libs/libSDL2-2.0.0.dylib ~/lib/
	ln -F -s ~/lib/libSDL2-2.0.0.dylib ~/lib/libSDL2.dylib
	mkdir -p includes/SDL2
	cp SDL2-2.0.5/include/*.h includes/SDL2/ 
	make -C libft/ fclean && make -C libft/
	gcc $(FLAGS) $(TFLAGS) $(SRC) $(LIB) -o $(NAME)

clean:
	@rm -f $(BIN)

fclean: clean
	@rm -f $(NAME)
	rm -rf includes/SDL2
	rm -rf SDL2-2.0.5

co: 
	make -C libft/ fclean && make -C libft/
	gcc $(FLAGS) $(TFLAGS) $(SRC) $(LIB) -o $(NAME)

re: fclean all
