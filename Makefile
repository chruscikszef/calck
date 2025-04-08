TARGET = calck
CC = gcc
SRC = main.c
CFLAGS = -Wint-conversion

all: $(TARGET)
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) 

install:
	cp -f $(TARGET) /usr/bin

remove:
	rm -f /usr/bin/$(TARGET)
