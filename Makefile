CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = TablasdeConversion
SRC = TablasdeConversion.c Conversion.c ConversionTests.c
OBJ = $(SRC:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ) -lm

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)
