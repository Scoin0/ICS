/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Homework 10
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         May 8th, 2020
//    FILE:         main.cpp
//    DESCRIPTION:  This file is the main file. This homework has us create a
//					simple program which uses a class hierarchy. For this 
//					assignment we're using Pokemon.
//
****************************************************************************/

#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <cstdlib>
#include <iterator>

#include "Pokemon.h"
#include "Pikachu.h"
#include "Salazzle.h"
#include "Mewtwo.h"

using namespace std;

void checkPokedex(Pokemon *);

/***************************************************************************
//
//    FUNCTIONNAME: main
//    DESCRIPTION:  The main function that runs the program
//    PARAMETERS:   argc    (int)       : command
//                  *argv   (char [])   : pointer
//
****************************************************************************/

int main(int argc, char *argv[])
{
	int i;

	vector<Pokemon *> pokeVector;
	map<string, Pokemon*> pokeMap;

	pokeMap.insert(pair<string, Pokemon*>("Pikachu", new Pikachu));
	pokeMap.insert(pair<string, Pokemon*>("Salazzle", new Salazzle));
	pokeMap.insert(pair<string, Pokemon*>("Mewtwo", new Mewtwo));

	pokeVector.push_back(new Pikachu);
	pokeVector.push_back(new Salazzle);
	pokeVector.push_back(new Mewtwo);

	cout << "\nThis program shows you a list of pokemon by their name, height, and typing. The parent class is Pokemon and every new pokemon showed is the child class. It uses two different types of data containers, map and vector. This program will use both methods to show you their data.\n";

	cout << "\nThe following is using Vector: \n";

	for (i = 0; i < pokeVector.size(); i++)
	{
		cout << "\n";
		checkPokedex(pokeVector[i]);
	}

	cout << "\nThe following is using Map: \n";

	cout << "\n";
	checkPokedex(pokeMap["Pikachu"]);
	cout << "\n";
	checkPokedex(pokeMap["Salazzle"]);
	cout << "\n";
	checkPokedex(pokeMap["Mewtwo"]);
	cout << "\n";

	for(i = 0; i < pokeVector.size(); i++)
	{
		delete pokeVector[i];
	}

	delete pokeMap["Pikachu"];
	delete pokeMap["Salazzle"];
	delete pokeMap["Mewtwo"];


	pokeMap.erase("Pikachu");
	pokeMap.erase("Salazzle");
	pokeMap.erase("Mewtwo");
}

/***************************************************************************
//
//    FUNCTIONNAME: checkPokedex
//    DESCRIPTION:  Print the data for the selected pokemon
//    PARAMETERS:   NONE
//
****************************************************************************/

void checkPokedex(Pokemon *pokemon)
{
	pokemon->printData();
}