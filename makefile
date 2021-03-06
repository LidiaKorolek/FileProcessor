EXE = bin/FileProcessor
TEST = bin/test

DIR_SRC = build/src
DIR_TEST = build/test

SOURCES = $(DIR_SRC)/main.o $(DIR_SRC)/CheckPath.o 

FLAGS = -Wall -Werror --std=c++17

OBJ = g++ $(FLAGS) -c $^ -o $@

.PHONY: clean all makeDir

all: makeDir $(EXE)

makeDir:
	mkdir -p bin/ build/src build/test

$(EXE): $(SOURCES)
	g++ $(FLAGS) $^ -o $@

$(DIR_SRC)/main.o: src/main.cpp
	$(OBJ)
$(DIR_SRC)/CheckPath.o: src/CheckPath.cpp
	$(OBJ)

clean:
	rm -r bin/ 
	rm -r build/ 