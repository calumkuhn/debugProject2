//
// Created by Calum Kuhn on 9/29/22.
//

#ifndef UNTITLED1_STRINGCOUNTER_H
#define UNTITLED1_STRINGCOUNTER_H

#include "DSString.h"
#include "DSVector.h"

using namespace std;

class StringCounter {

private:


public:

    int goodCount;
    int badCount;
    DSString stringName;

    /**
     * Make sure you implement the rule of 3 and use proper memory management.
     * To help you get started, you can implement the following:
     **/

    StringCounter(); //default
    StringCounter(const StringCounter &);  // copy constructor
    ~StringCounter();  // destructor
    bool isDuplicate(const DSString); // existingStringCounterObj.isDuplicate(stringBeingChecked) returns  true if match
    void addBySentMode(const bool sentimentModeIn); //takes in sentiment mode, increments based on positive or negative

};


#endif //UNTITLED1_STRINGCOUNTER_H
