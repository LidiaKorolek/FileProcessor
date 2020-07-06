EXE = bin/FileProcessor.exe
TEST = bin/test.exe

DIR_SRC = build/src
DIR_TEST = build/test

FLAGS = -Wall -Werror --std=c++17

OBJ = g++ $(FLAGS) -c $^ -o $@

.PHONY: clean all makeDir

all: makeDir $(EXE)

makeDir:
	mkdir -p bin/ build/src build/test

$(EXE): $(DIR_SRC)/main.o
	g++ $(FLAGS) $^ -o $@

$(DIR_SRC)/main.o: src/main.cpp
	$(OBJ)


clean:
	rm -r bin/ 
	rm -r build/ 