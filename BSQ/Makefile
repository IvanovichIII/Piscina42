CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = bsq
SOURCE = *.c
PERL = MapGen.pl

all: $(TARGET)

$(TARGET): $(SOURCE)
	$(CC) $(CFLAGS) -o $@ $^ && ./MapGen.pl 50 25 1 > map.txt

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) *.o
