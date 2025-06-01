LINE_CLEAR = \33[2K\r

COLOR_RESET = \033[0m

COLOR_BLACK = \033[0;30m
COLOR_RED = \033[0;31m
COLOR_GREEN = \033[0;32m
COLOR_YELLOW = \033[0;33m
COLOR_BLUE = \033[0;34m
COLOR_PINK = \033[0;35m
COLOR_TEAL = \033[0;36m
COLOR_WHITE = \033[0;37m

COLOR_BOLD_GREY = \033[30;1m
COLOR_BOLD_ORANGE = \033[31;1m
COLOR_BOLD_GREEN = \033[32;1m
COLOR_BOLD_YELLOW = \033[33;1m
COLOR_BOLD_BLUE = \033[34;1m
COLOR_BOLD_PINK = \033[35;1m
COLOR_BOLD_TEAL = \033[36;1m
COLOR_BOLD_WHITE = \033[37;1m
COLOR_BOLD_RED = \033[1;31m
CC = gcc

# Position Independent Code
CFLAGS = -Wall -Wextra -Werror -I./include -fPIC -std=c99

# Linker flags
LDFLAGS = -shared

# Directories
SRCDIR = ./src
OBJDIR = ./obj
LIBDIR = ./lib

# List of all C sources
SRCS = $(wildcard $(SRCDIR)/utils_*.c)

# converts ./src/*.c to ./src/*.o in the SRCS variable.
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))

# Shared library output
LIBRARY = $(LIBDIR)/libutils.so



# make target DEBUG=yes
DEBUG ?= no
ifeq ($(DEBUG),yes)
	CFLAGS = -I./include -fPIC -std=c99
endif


.PHONY: clean re all make_dirs



# Main target
all: $(LIBRARY)
	@printf '$(COLOR_BLUE)libutils, all done!$(COLOR_RESET)\n\n'

# Ensure directories exist first
$(LIBRARY): | make_dirs

# Shared library depends on objects.
$(LIBRARY): $(OBJECTS)
	@printf '$(COLOR_BOLD_RED)$(LINE_CLEAR)[ LINK ]    %-40s' "$@"
	@$(CC) $(LDFLAGS) $(OBJECTS) -o $@ \
		&& printf '$(COLOR_BOLD_GREEN)OK$(COLOR_RESET)\n' \
		|| { printf '$(COLOR_BOLD_RED)FAIL$(COLOR_RESET)\n'; exit 1; }

# Compile rule
$(OBJDIR)/%.o: $(SRCDIR)/%.c | make_dirs
	@printf '$(COLOR_BOLD_PINK)$(LINE_CLEAR)[ COMPILE ] $(COLOR_BOLD_YELLOW)%-40s' "$<"
	@$(CC) $(CFLAGS) -c $< -o $@ \
		&& printf '$(COLOR_BOLD_GREEN)OK$(COLOR_RESET)\n' \
		|| { printf '$(COLOR_BOLD_RED)FAIL$(COLOR_RESET)\n'; exit 1; }
# Order-only prerequisite
make_dirs:
	@mkdir -p $(LIBDIR)
	@mkdir -p $(OBJDIR)

# Cleanup
clean:
	rm -rf $(OBJDIR) $(LIBDIR)

# Rebuild everything
re: clean all
