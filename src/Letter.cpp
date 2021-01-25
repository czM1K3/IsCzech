#include <iostream>
#include <cmath>
#include "Letter.h"
using namespace std;

Letter::Letter(string newLetter, double newPercentage) : letter(newLetter), percentageOriginal(newPercentage)
{
    count = 0;
}

void Letter::Log()
{
    cout << this->letter << "\t" << this->percentageOriginal << "\t" << count << "\t" << std::round(this->percentageNew * 1000) / 1000 << "\t" << this->percentageDifference << endl;
}