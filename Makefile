SRC	= *.c

SRCO	=$(SRC:.c=.o)

CC	= gcc
FL	= -Wall -Werror -Wextra
NAME	= libft.a
COMP	= $(CC) $(FL)

clean:
	rm -f prog
	rm -f *.o
	rm -f *.a

lib:
	$(COMP) -c $(SRC)
	ar rcs $(NAME) $(SRCO)

m:
	$(COMP) main.c -L. libft.a -o prog
	./prog
q:
	make clean
	make lib
	make m
