CC = gcc
SRCS = $(wildcard *.c)
OBJECTS = $(SRCS:.c=.o)
TARGET = book_Management

all : $(TARGET)		#Execution File name

book_Management : $(OBJECTS)
	$(CC) -o $@ $^

del:
	cd ./test && rm *

clean:
	rm *.o book_Management
