NAME = rush-02
SRCS = main.c strings.c read_file.c parse_line.c dictionary.c output.c

all: $(NAME)

$(NAME): $(SRCS) rush.h
	cc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
