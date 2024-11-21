CC = cc
FLAGS = -Wall -Wextra -Werror
INCLUDE = include
LIB = libftprintf.a
FOLDER = src
SRC = $(addprefix $(FOLDER)/, ft_isascii.c ft_nbr_tim.c ft_str_tim.c ft_strlen.c \
      ft_printf.c ft_smallbase_tim.c ft_uns_tim.c ft_char_tim.c ft_ptr_tim.c \
	  ft_putnbrbase.c ft_bigbase_tim.c)
INCLUDE =-I include
NAME = libftprintf.a
OBJ = $(SRC:.c=.o)

all : $(NAME) 

%.o : %.c
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

$(NAME) : $(OBJ)
	ar -rcs $@ $^

re : fclean all

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIB)
