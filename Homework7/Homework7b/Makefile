COMPILER = gcc
CFLAGS = -ansi -pedantic-errors -Wall -c
OBJECTS = homework7b.o
TARGET = homework7b

all: homework7b

homework7b: $(OBJECTS)
	$(COMPILER) -o $(TARGET) $(OBJECTS)

homework7b.o: homework7b.c
	$(COMPILER) $(CFLAGS) homework7b.c

clean:
	rm *.o $(TARGET)
