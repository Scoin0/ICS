/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Homework 10
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         May 8th, 2020
//    FILE:         Pokemon.h
//    DESCRIPTION:  The abstract class for pokemon
//
****************************************************************************/

#ifndef POKEMON_H
#define POKEMON_H

#include <string>
using std::string;

class Pokemon
{

	protected:
		string type;
		float height;

	public:
		Pokemon();
		virtual ~Pokemon();
		virtual void printData()=0;

};

#endif