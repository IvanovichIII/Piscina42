CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = rush02
SOURCE = *.c

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) *.o
