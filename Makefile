# %.c
# matches any file name that ends in '.c'
#
# ss%.c
# matches any file name that starts with 'ss' ends in '.c'
#
# $@
# file name of the target of the rule.
#
# $<
# names of all the prerequisites, with spaces between them.
#

ifeq ($(shell uname), FreeBSD)
	CC = gcc13
else
	CC = gcc
endif

# Position Independent Code
CFLAGS = -Wall -Wextra -Werror -I./include -fPIC -std=c99
# linker flags
LDFLAGS = -shared
SRCDIR = ./src
OBJDIR = ./obj
LIBDIR = ./lib

# list of all c files in ./src directory.
SRCS = $(wildcard $(SRCDIR)/utils_*.c)

# converts ./src/*.c to ./src/*.o in the SRCS variable.
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

# location of the compiled binary file.
LIBRARY = $(LIBDIR)/libutils.so



# make target DEBUG=yes
DEBUG ?= no
ifeq ($(DEBUG),yes)
	CFLAGS = -I./include -fPIC -std=c99
endif



.PHONY: all clean re make_dirs



# target: prerequisites
all: make_dirs $(LIBRARY)

# provides one time run mkdir
make_dirs:
	@mkdir -p $(LIBDIR)
	@mkdir -p $(OBJDIR)

# compiling source files
$(LIBRARY): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@


$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -rf $(OBJDIR) $(LIBDIR)


re: clean all

