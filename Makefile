CC = gcc
OBJDIR = ./obj_files
SRC = _printf.c _putchar.c 0-main.c op_functions.c get_op_fun.c math.c format_specifiers1.c format_specifiers2.c
_OBJ = $(patsubst %c,%o,$(SRC))
OBJ = $(patsubst %.c, $(OBJDIR)/%.o,$(SRC))
DEPS = main.h
NAME = file
CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format

all: $(OBJ)


$(OBJDIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^


.PHONY: clean

clean: ; $(RM) $(OBJDIR)/*.o
