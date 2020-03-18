COMPILER = gcc
CFLAGS = -ansi -pedantic-errors -Wall -c
OBJECTS = database.o user_interface.o
DEPENDENCIES = record.h database.h
TARGET = Project1

output: $(OBJECTS)
        $(COMPILER) -o $(OBJECTS) $(TARGET)

user_interface.o: user_interface.c
        $(COMPILER) $(CFLAGS) user_interface.c

database.o: database.c $(DEPENDENCIES)
        $(COMPILER) $(CFLAGS) database.c

clean:
        rm *.o $(TARGET)