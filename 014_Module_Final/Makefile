# Variables to hold the cpp and h files
CPP_FILES := main.cpp Book.cpp Fiction.cpp NonFiction.cpp TextBook.cpp
H_FILES := Book.h Fiction.h NonFiction.h TextBook.h

# Variable for the compiler flags
FLAGS := -g -ggdb -Wpedantic -Wall -Wextra -Werror -Wunreachable-code --std=c++20

# The final executable file
EXEC := BookInventory.exe

# Default target
all: $(EXEC)

# Rule to link the object files
$(EXEC): $(CPP_FILES) $(H_FILES)
	g++ $(FLAGS) $(CPP_FILES) -o $(EXEC)

# Clean target
clean:
	rm -f $(EXEC)
