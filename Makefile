NAME = libft.a

SRC = sources/*.c

OBJ = *.o

CC = gcc

FLAG = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	@$(CC) -c $(FLAG) $(SRC)
	@ar rc $(NAME) $(OBJ)
	@mv *.o sources
	@ranlib $(NAME)
	@echo "\033[32mCompilation of libft was pretty good.\033[0m"
clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@echo "Libft removed."
re: fclean all
