#include <string>
using namespace std;

#ifndef LETTER_H
#define LETTER_H

class Letter
{
public:
    Letter(string newLetter, double newPercentage);
    void Log();
    int count;
    const string letter;
    const double percentageOriginal;
    double percentageNew;
    double percentageDifference;
};

#endif