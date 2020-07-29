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

#ifndef PIKACHU_H
#define PIKACHU_H

#include <string>
#include "Pokemon.h"

using std::string;

class Pikachu:public Pokemon 
{

	protected:
		string type;
		float height;

	public:
		Pikachu();
		virtual ~Pikachu();
		void printData();
};

#endif