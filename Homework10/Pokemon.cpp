/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Homework 10
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         May 8th, 2020
//    FILE:         Pokemon.cpp
//    DESCRIPTION:  Pokemon's function file
//
****************************************************************************/

#include "Pokemon.h"
#include <iostream>

using namespace std;

/***************************************************************************
//
//    FUNCTIONNAME: Pokemon
//    DESCRIPTION:  The Default constructor for the Pokemon class
//    PARAMETERS:   NONE
//
****************************************************************************/

Pokemon::Pokemon()
{
	cout << "\nPokemon Constructor\n";
}

/***************************************************************************
//
//    FUNCTIONNAME: Pokemon
//    DESCRIPTION:  The Default destructor for the Pokemon class
//    PARAMETERS:   NONE
//
****************************************************************************/

Pokemon::~Pokemon()
{
	cout << "\nPokemon Destructor\n";
}

/***************************************************************************
//
//    FUNCTIONNAME: printData
//    DESCRIPTION:  Print the data for the selected pokemon
//    PARAMETERS:   NONE
//
****************************************************************************/

void Pokemon::printData()
{
	cout << "Pokemon\n";

}