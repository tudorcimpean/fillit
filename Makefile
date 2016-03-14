NAME = fillit

DIR = ./

SRC_FILES = main.c \
			tetrix1.c \
			tetrix2.c \
			tetrix3.c \
			map.c \
			print_rez.c \
			rez.c

O_FILES = $(SRC_FILES:.c=.o)

CC = gcc

FLAGS = -Wall -Werror -Wextra

I_LIBFT = -Ilibft

LIBFT = -Llibft $(I_LIBFT) -lft

all: $(NAME)

$(NAME): $(O_FILES)
	make -C libft
	$(CC) $(FLAGS) -o $(NAME) $^ -I$(DIR) $(LIBFT)

%.o: $(DIR)%.c
	$(CC) $(FLAGS) -I$(DIR) -o $@ -c $< $(I_LIBFT)

clean:
	make clean -C libft
	rm -f $(O_FILES)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all
