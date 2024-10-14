CC = cc
FLAGS = -Wall -Wextra -Werror
INCLUDE = include
LIB = libftprintf.a
FOLDER = src
BUILD = build
SRC = $(addprefix $(FOLDER)/, ft_isascii.c ft_putnbr_fd.c ft_putstr_fd.c ft_strlen.c \
      ft_printf.c ft_putnbrbase.c ft_putunsnb_fd.c ft_putchar_fd.c)
INCLUDE =-I include
LIB = libftprintf.a
OBJ = $(SRC:.c=.o)

all : $(LIB) 

%.o : %.c
	$(CC) $(INCLUDE) -c $< -o $@

$(LIB) : $(OBJ)
	ar -rcs $@ $^

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIB)





