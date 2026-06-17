CC = gcc

CFLAGS = -Wall -Wextra -std=c11

TARGET = programa

SRC = src/main.c \
      src/basicos/bubble.c \
      src/basicos/selection.c \
      src/basicos/insertion.c \
      src/avancados/merge.c \
      src/avancados/quick.c \
      src/avancados/heap.c \
      src/utils/utils.c

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	del /Q $(TARGET).exe 2>nul || exit 0

.PHONY: all run clean