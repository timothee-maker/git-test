CC = cc
FLAGS = -Wall -Wextra -Werror -I $(INCLUDE_DIR)
LIBC = 	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_strlcat.c ft_toupper.c \
	ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c

ADD_F = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
	ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
	ft_putnbrbase.c

LIB = libft.a
INCLUDE_DIR = include
SRC = $(ADD_F) $(LIBC)
OBJ = $(SRC:.c=.o)
AR = ar

all : $(LIB)

$(LIB) : $(OBJ)
	$(AR) -rcs $(LIB) $(OBJ)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(LIB)

re : fclean all
