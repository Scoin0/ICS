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

#ifndef SALAZZLE_H
#define SALAZZLE_H

#include <string>
#include "Pokemon.h"

using std::string;

class Salazzle:public Pokemon 
{

	protected:
		string type;
		float height;

	public:
		Salazzle();
		virtual ~Salazzle();
		void printData();
};

#endif