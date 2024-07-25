CFLAGS = -Wall -Wextra -Werror
DEPS = header.h
SRC = $(wildcard *.c)
OBJ = $(patsubst %.c, %.o, $(SRC))
NAME = bsq

$(NAME): $(OBJ)
	cc $(CFLAGS) $^ -o $@

%.o: %.c $(DEPS)
	cc -c -o $@ $< $(CFLAGS)

clean:
	rm -f $(OBJ)
