# My own custom library for 42KL.
# How to use: 
# 1. Type 'make' to create mylibft.a.
# 2. Copy mylibft.a and mylibft.h to your project
# folder.
# 3. Write 'include "mylibft.h"' in your header file
# 4. Type gcc (all your .c files) mylibft.a libft/libft.a -o program name
# to create your program.
NAME = mylibft.a
LIBFT = libft/*.c
FTPRINTF = ftprintf/*.c
NEWGNL = newgnl/*.c
LIBS = $(LIBFT) $(FTPRINTF) $(NEWGNL)

all:
	gcc -Wall -Wextra -Werror -c $(LIBS)
	mv *.o obj/.
	ar rcs $(NAME) obj/*.o -o $(NAME)
clean:
	rm -f obj/*.o
fclean: clean
	rm -f $(NAME)
re: fclean all
# Use this to test with main.c
t: all
	gcc main.c $(NAME) libft/libft.a
	./a.out

.PHONY: all clean fclean t