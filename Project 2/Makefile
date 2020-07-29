COMPILER = g++
CFLAGS = -ansi -pedantic-errors -Wall -c
DFLAGS = -ansi -pedantic-errors -Wall -c -DDEBUG 
OBJECTS = llist.o user_interface.o 
DOBJECTS = llist_debug.o user_interface_debug.o
DEPENDENCIES = record.h llist.h
TARGET = project project_debug

all: $(TARGET)

project: $(OBJECTS)
	$(COMPILER) -o project $(OBJECTS)

llist.o: llist.cpp $(DEPENDENCIES)
	$(COMPILER) $(CFLAGS) llist.cpp

user_interface.o: user_interface.cpp $(DEPENDENCIES)
	$(COMPILER) $(CFLAGS) user_interface.cpp

project_debug: $(DOBJECTS)
	$(COMPILER) -o project_debug $(OBJECTS)

llist_debug.o: llist.cpp $(DEPENDENCIES)
	$(COMPILER) $(DFLAGS) llist.cpp

user_interface_debug.o: user_interface.cpp $(DEPENDENCIES)
	$(COMPILER) $(DFLAGS) user_interface.cpp

clean:
	rm -f *.o $(TARGET)
