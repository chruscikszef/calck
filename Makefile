TARGET = src/calck
CC = gcc
SRC = src/main.c
CFLAGS = -Wint-conversion

all: $(TARGET)
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) 

install:
	sudo cp -f $(TARGET) /usr/bin

remove:
	sudo rm -f /usr/bin/$(TARGET)
