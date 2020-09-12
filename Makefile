NAME = RTv1

SRC = src/main.c \
	gnl/get_next_line.c

INCLUDES = /usr/local/include

LIBOBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra
GLFLAGS = -lm -lmlx -framework OpenGL -framework AppKit

$(NAME): $(LIBOBJ)
		make -C ./libft
		gcc $(CFLAGS) $(LIBOBJ) -L./libft -I $(INCLUDES) $(GLFLAGS) -lft -o $(NAME)
%.o:%.c include/RTv1.h
		gcc -MD -c $<  -o $@

all: $(NAME)


clean:
	make -C ./libft clean
	-rm -rf $(LIBOBJ)
	-rm -f src/*.d

fclean: clean
	make -C ./libft fclean
	-rm -f $(NAME)
	-rm -f src/*.d

re: fclean all
