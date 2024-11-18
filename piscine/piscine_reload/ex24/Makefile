CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
INCLUDE_DIR = include
SRC = $(addprefix $(SRC_DIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c)
OBJ = $(SRC:.c=.o)
OUTPUT =  libft.a
AR = ar

all: $(OUTPUT)

$(OUTPUT): $(OBJ)
	$(AR) -rcs $(OUTPUT) $(OBJ)  

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCLUDE_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OUTPUT)

re: fclean all

