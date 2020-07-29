/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Homework 10
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         May 8th, 2020
//    FILE:         Salazzle.cpp
//    DESCRIPTION:  Salazzle's function file.
//
****************************************************************************/

#include "Salazzle.h"
#include <iostream>

using namespace std;

/***************************************************************************
//
//    FUNCTIONNAME: Salazzle
//    DESCRIPTION:  The Default constructor for the Salazzle class
//    PARAMETERS:   NONE
//
****************************************************************************/

Salazzle::Salazzle()
{
	cout << "\nSalazzle Constructor\n";
	type = "Poison/Fire";
	height = 3.11;
}

/***************************************************************************
//
//    FUNCTIONNAME: Salazzle
//    DESCRIPTION:  The Default destructor for the Salazzle class
//    PARAMETERS:   NONE
//
****************************************************************************/

Salazzle::~Salazzle()
{
	cout << "\nSalazzle Destructor\n";
}

/***************************************************************************
//
//    FUNCTIONNAME: printData
//    DESCRIPTION:  Print the data for the selected pokemon
//    PARAMETERS:   NONE
//
****************************************************************************/

void Salazzle::printData()
{
	cout << "Pokemon Name: Salazzle\n";
	cout << "Pokemon Typing: " << type << "\n";
	cout << "Pokemon's Height: " << height << " ft\n";
}