CC = gcc
LIBDIR = $(realpath ../lib)
OBJDIR = ./out
CFLAGS = -Wall -Wextra -Werror -std=c99

LDFLAGS = -L$(LIBDIR) -lutils -Wl,-rpath=$(LIBDIR)
SRCS = $(wildcard ./*.c)
OBJECTS = $(patsubst ./%.c, $(OBJDIR)/%.o, $(SRCS))



DEBUG ?= no
ifeq ($(DEBUG),yes)
	CFLAGS = -std=c99
endif



.PHONY: all clean re make_dirs


all: make_dirs $(OBJECTS)

make_dirs:
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: ./%.c
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)

clean:
	rm -rf $(OBJDIR)

re: clean all

