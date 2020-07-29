COMPILER = g++
CFLAGS = -ansi -pedantic-errors -Wall -c 
OBJECTS = main.o Pokemon.o Pikachu.o Salazzle.o Mewtwo.o
DEPENDENCIES = Pokemon.h Pikachu.h Salazzle.h Mewtwo.h
TARGET = pokedex

all: $(TARGET)

pokedex: $(OBJECTS)
	$(COMPILER) -o pokedex $(OBJECTS)

main.o: main.cpp $(DEPENDENCIES)
	$(COMPILER) $(CFLAGS) main.cpp

Pokemon.o: Pokemon.cpp $(DEPENDENCIES)
	$(COMPILER) $(CFLAGS) Pokemon.cpp

Pikachu.o: Pikachu.cpp $(DEPENDENCIES)
	$(COMPILER) $(CFLAGS) Pikachu.cpp

Salazzle.o: Salazzle.cpp $(DEPENDENCIES)
	$(COMPILER) $(CFLAGS) Salazzle.cpp

Mewtwo.o: Mewtwo.cpp $(DEPENDENCIES)
	$(COMPILER) $(CFLAGS) Mewtwo.cpp

clean:
	rm -f *.o $(TARGET)
