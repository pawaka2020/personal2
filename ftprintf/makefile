# How to use:
# Simply type 'make'
# Then move the created libftprintf.a

NAME = ftprintf.a
all: $(NAME)
$(NAME):
	gcc -Wall -Wextra -Werror -c src/*.c
	mv *.o obj/
	ar rcs $(NAME) obj/*.o
clean:
	rm -f obj/*.o
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