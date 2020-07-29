#include <jni.h>
#include "homework9.h"

/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Assignment 9
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Apr 27th, 2020
//    FILE:         homework9.c
//    DESCRIPTION:  Holds the method for multiplying the number
//
****************************************************************************/

/***************************************************************************
//
//    FUNCTIONNAME: Java_homework9_convert
//    DESCRIPTION:  This takes the number and multiplies it by 2.54
//    PARAMETERS:   convert    (double)       : number to be converted
//
****************************************************************************/

JNIEXPORT jdouble JNICALL Java_homework9_convert(JNIEnv *env, jclass class, jdouble convert)
{
	double resultedNumber;
	resultedNumber = convert * 2.54;
	return resultedNumber;
}