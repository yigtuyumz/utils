CC = gcc
LIBDIR = ../lib
OBJDIR = ./out
CFLAGS = -Wall -Wextra -Werror

LDFLAGS = -L$(LIBDIR) -lutils -Wl,-rpath=$(LIBDIR)
SRCS = $(wildcard ./*.c)
OBJECTS = $(patsubst ./%.c, $(OBJDIR)/%.o, $(SRCS))


.PHONY: all clean re make_dirs


all: make_dirs $(OBJECTS)

make_dirs:
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: ./%.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJDIR)

re: clean all

