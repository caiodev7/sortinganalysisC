CC = gcc

CFLAGS = -Wall -Wextra -std=c11

TARGET = programa
TEST_TARGET = testes

SRC = src/main.c 
src/basicos/bubble.c 
src/basicos/selection.c 
src/basicos/insertion.c 
src/avancados/merge.c 
src/avancados/quick.c 
src/avancados/heap.c 
src/utils/utils.c

TEST_SRC = tests/test_basic.c 
src/basicos/bubble.c 
src/basicos/selection.c 
src/basicos/insertion.c 
src/avancados/merge.c 
src/avancados/quick.c 
src/avancados/heap.c 
src/utils/utils.c

all:
$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

test:
$(CC) $(CFLAGS) $(TEST_SRC) -o $(TEST_TARGET)
./$(TEST_TARGET)

coverage:
$(CC) --coverage -g -O0 $(TEST_SRC) -o testes_gcov
./testes_gcov

profile:
$(CC) -pg -g -O0 $(TEST_SRC) -o testes_profile
./testes_profile

clean:
del /Q *.exe 2>nul
del /Q *.gcda 2>nul
del /Q *.gcno 2>nul
del /Q *.gcov 2>nul
del /Q gmon.out 2>nul

.PHONY: all test coverage profile clean
