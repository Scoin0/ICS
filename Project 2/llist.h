/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Project 2
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Apr 19, 2020
//    FILE:         llist.h
//    DESCRIPTION:  The class for llist
//
****************************************************************************/

#ifndef LLIST_H
#define LLIST_H

#include "record.h"

using std::ostream;

class llist 
{
    private:
        record *    start;
        char        fileName[16];
        int         readFile();
        int         writeFile();
        record *    reverse(record *);
        void        cleanup();

    public:
        llist();
        llist(char []);
        ~llist();
        int addRecord(int, char [], char []);
        int printRecord(int);
        friend ostream& operator << (ostream&, const llist&);
        int modifyRecord(int, char []);
        int deleteRecord(int);
        void reverse();
};

#endif