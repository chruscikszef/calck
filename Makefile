TARGET = src/calck
CC = gcc
SRC = src/main.c
CFLAGS = -Wint-conversion
WINCC = x86_64-w64-mingw32-gcc 
WINSRC = src/main-win.c
WINTARGET = src/calck.exe

all: $(TARGET)
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET) 

install:
	sudo cp -f $(TARGET) /usr/bin

remove:
	sudo rm -f /usr/bin/$(TARGET)
win:
	$(WINCC) $(WINSRC) -o $(WINTARGET)
