#include <iostream>
#include "Letter.h"
using namespace std;

Letter::Letter(string newLetter, double newPercentage) : letter(newLetter), percentageOriginal(newPercentage)
{

}

void Letter::Log()
{
    cout << this->letter << " < " << this->percentageOriginal << endl;
}