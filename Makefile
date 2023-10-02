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


CC = gcc
# Position Independent Code
CFLAGS = -Wall -Wextra -Werror -I./include -fPIC
# linker flags
LDFLAGS = -shared
SRCDIR = ./src
OBJDIR = ./obj
LIBDIR = ./lib

# list of all c files in ./src directory.
SOURCES = $(wildcard $(SRCDIR)/utils_*.c)

# converts ./src/*.c to ./src/*.o in the SOURCES variable.
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SOURCES))

# location of the compiled binary file.
LIBRARY = $(LIBDIR)/libutils.so



.PHONY: all clean re



# target: prerequisites
all: $(LIBRARY)


$(LIBRARY): $(OBJECTS)
# compiling source files
# here '$@' expands to $(EXECUTABLE) = '$(BINDIR)/utils' = './bin/utils'
	mkdir -p $(LIBDIR)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@


$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	rm -f $(OBJECTS) $(LIBRARY)


re: clean all


