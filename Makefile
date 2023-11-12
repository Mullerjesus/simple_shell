CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89
SRC = src/main.c src/shell.c src/execute.c
OBJ = $(SRC:.c=.o)
EXEC = simple_shell

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(EXEC)

re: fclean all

.PHONY: all clean fclean re

