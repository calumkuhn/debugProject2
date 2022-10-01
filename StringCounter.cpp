//
// Created by Calum Kuhn on 9/29/22.
//

#include "StringCounter.h"
#include "DSString.h"

StringCounter::StringCounter(){//default
    goodCount = 0;
    badCount = 0;
    stringName = "";
}

StringCounter::StringCounter(const StringCounter &s) {  // copy constructor
    goodCount = s.goodCount;
    badCount = s.badCount;
    stringName = s.stringName;
}

StringCounter::~StringCounter(){ //destructor

}

bool StringCounter::isDuplicate(const DSString stringBeingChecked){
    if(stringName == stringBeingChecked)
        return true;
    else return false;
}

void StringCounter::addBySentMode(const bool sentimentModeIn){
    if(sentimentModeIn)
        goodCount = goodCount +1;
    else badCount = badCount +1;
}





