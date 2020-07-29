/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Homework 10
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         May 8th, 2020
//    FILE:         Pikachu.cpp
//    DESCRIPTION:  Pikachu's function file
//
****************************************************************************/

#include "Pikachu.h"
#include <iostream>

using namespace std;

/***************************************************************************
//
//    FUNCTIONNAME: Pikachu
//    DESCRIPTION:  The Default constructor for the Pikachu class
//    PARAMETERS:   NONE
//
****************************************************************************/

Pikachu::Pikachu()
{
	cout << "\nPikachu Constructor\n";
	type = "Eletric";
	height = 1.4;
}

/***************************************************************************
//
//    FUNCTIONNAME: Pikachu
//    DESCRIPTION:  The Default destructor for the Pikachu class
//    PARAMETERS:   NONE
//
****************************************************************************/

Pikachu::~Pikachu()
{
	cout << "\nPikachu Destructor\n";
}

/***************************************************************************
//
//    FUNCTIONNAME: printData
//    DESCRIPTION:  Print the data for the selected pokemon
//    PARAMETERS:   NONE
//
****************************************************************************/

void Pikachu::printData()
{
	cout << "Pokemon Name: Pikachu\n";
	cout << "Pokemon Typing: " << type << "\n";
	cout << "Pokemon's Height: " << height << " ft\n";
}