# How to use:
# Simply type 'make'
# Then move the created libftprintf.a
NAME = ftprintf.a

all:
	gcc -Wall -Wextra -Werror -c *.c
	ar rcs $(NAME) *.o
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all

# For testing. Remember to uncomment main in ft_printf.c
t: re
	make clean
	gcc src/ft_printf.c $(NAME)
	clear
	./a.out
.PHONY: all clean fclean re t