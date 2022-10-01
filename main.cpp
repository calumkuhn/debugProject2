#include <iostream>
#include <fstream>
#include "DSVector.h"
#include "DSString.h"
#include <cctype>
#include "Functions.h"
#include "StringCounter.h"

using namespace std;

int main(int argc, char** argv)
{
    DSVector<StringCounter> sentimentTrainedVect = trainFunction();
    cout << "Num Words Counted: " << sentimentTrainedVect.size() << '\n';
    for(int i = 0; i<10; i++){
        cout << "Good count: " << sentimentTrainedVect[i].goodCount
        << " Bad count: " << sentimentTrainedVect[i].badCount
        << " String name: " << sentimentTrainedVect[i].stringName << '\n';
    }
   return 0;
}
