COMPILER = gcc
CFLAGS = -ansi -pedantic-errors -Wall -c
OBJECTS = paint.o  driver.o
DEPENDENCIES = paint.h
TARGET = homework7a

all: homework7a

homework7a: $(OBJECTS)
        $(COMPILER) -o $(TARGET) $(OBJECTS)

paint.o: paint.c $(DEPENDENCIES)
        $(COMPILER) $(CFLAGS) paint.c

driver.o: driver.c $(DEPENDENCIES)
        $(COMPILER) $(CFLAGS) driver.c

clean:
        rm *.o $(TARGET)