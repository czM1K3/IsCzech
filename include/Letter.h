#include <string>
using namespace std;

#ifndef LETTER_H
#define LETTER_H

class Letter
{
private:
    const string letter;
    const double percentageOriginal;
public:
    Letter(string newLetter, double newPercentage);
    void Log();
};

#endif