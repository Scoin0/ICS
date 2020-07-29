/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Homework 10
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         May 8th, 2020
//    FILE:         Mewtwo.cpp
//    DESCRIPTION:  Mewtwo's function file 
//
****************************************************************************/


#include "Mewtwo.h"
#include <iostream>

using namespace std;

/***************************************************************************
//
//    FUNCTIONNAME: Mewtwo
//    DESCRIPTION:  The Default constructor for the Mewtwo class
//    PARAMETERS:   NONE
//
****************************************************************************/

Mewtwo::Mewtwo()
{
	cout << "\nMewtwo Constructor\n";
	type = "Psychic";
	height = 6.7;
}

/***************************************************************************
//
//    FUNCTIONNAME: Mewtwo
//    DESCRIPTION:  The Default destructor for the Mewtwo class
//    PARAMETERS:   NONE
//
****************************************************************************/

Mewtwo::~Mewtwo()
{
	cout << "\nMewtwo Destructor\n";
}

/***************************************************************************
//
//    FUNCTIONNAME: printData
//    DESCRIPTION:  Print the data for the selected pokemon
//    PARAMETERS:   NONE
//
****************************************************************************/

void Mewtwo::printData()
{
	cout << "Pokemon Name: Mewtwo\n";
	cout << "Pokemon Typing: " << type << "\n";
	cout << "Pokemon's Height: " << height << " ft\n";
}