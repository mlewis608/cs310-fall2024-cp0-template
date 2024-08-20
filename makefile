# This is a simplistic makefile with minimal functionality.
# More interesting makefiles to come!
#
# Specifiy the target
all: simple

# Specify the object files that the target depends on
# Also specify the object files needed to create the executable
simple: simple.o
	g++ simple.o -o simple

# Specify how the object files should be created from source files
simple.o: simple.cpp
	g++ -Wall -Wextra -c simple.cpp

# Specify the object files and executables that are generated
# and need to be removed to re-compile the whole thing
clean:
	rm -f *.o simple
