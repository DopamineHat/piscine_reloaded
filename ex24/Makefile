NAME := libft.a
FLAGS := -Werror -Wextra -Wall
INCLUDES := -I ./includes/
SOURCES := srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c \
			srcs/ft_swap.c srcs/ft_strlen.c


all : $(NAME)

$(NAME) :
	gcc $(FLAGS) $(INCLUDES) -c $(SOURCES)
	ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ranlib $(NAME)

clean :
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean : clean
	rm -f $(NAME)

re : fclean all
