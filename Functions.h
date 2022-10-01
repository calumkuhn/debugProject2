//
// Created by Calum Kuhn on 9/22/22.
//

#ifndef UNTITLED1_FUNCTIONS_H
#define UNTITLED1_FUNCTIONS_H
#include "Functions.h"
#include "DSString.h"
#include "DSVector.h"
#include "StringCounter.h"
#include <iostream>
#include <cctype>


DSVector<DSString> tokenizerFunction(DSString replace);
bool stopWordLibrary(DSString stopWord);
bool isAlright(char checkChar);
bool countAsWord(char checkChar);
bool isBadPrefix(string wordIn);
DSVector<StringCounter> trainFunction();
//int checkIfDuplicate(DSString wordBeingChecked, DSVector<StringCounter> vectorOfExistingWords)



#endif //UNTITLED1_FUNCTIONS_H
