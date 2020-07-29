/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Homework 10
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         May 8th, 2020
//    FILE:         Pikachu.h
//    DESCRIPTION:  This is the child class for Pikachu
//
****************************************************************************/

#ifndef MEWTWO_H
#define MEWTWO_H

#include <string>
#include "Pokemon.h"

using std::string;

class Mewtwo:public Pokemon 
{

	protected:
		string type;
		float height;

	public:
		Mewtwo();
		virtual ~Mewtwo();
		void printData();
};

#endif