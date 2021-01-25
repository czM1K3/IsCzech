#include <iostream>
#include <string>
#include <cmath>
#include "Calculator.h"

using namespace std;

void Calculator::Calculate(string original)
{
    Letter array [42] = {
        Letter("a", 6.698),
        Letter("á", 2.129),
        Letter("b", 1.665),
        Letter("c", 1.601),
        Letter("č", 1.017),
        Letter("d", 3.613),
        Letter("ď", 0.019),
        Letter("e", 7.831),
        Letter("é", 1.178),
        Letter("ě", 1.491),
        Letter("f", 0.394),
        Letter("g", 0.343),
        Letter("h", 1.296),
        Letter("ch", 1.007),
        Letter("i", 4.571),
        Letter("í", 3.103),
        Letter("j", 1.983),
        Letter("k", 3.752),
        Letter("l", 4.097),
        Letter("m", 3.262),
        Letter("n", 6.676),
        Letter("ň", 0.073),
        Letter("o", 8.283),
        Letter("ó", 0.032),
        Letter("p", 3.454),
        Letter("q", 0.006),
        Letter("r", 3.977),
        Letter("ř", 1.186),
        Letter("s", 4.620),
        Letter("š", 0.817),
        Letter("t", 5.554),
        Letter("ť", 0.038),
        Letter("u", 3.131),
        Letter("ú", 0.145),
        Letter("ů", 0.569),
        Letter("v", 4.378),
        Letter("w", 0.072),
        Letter("x", 0.092),
        Letter("y", 1.752),
        Letter("ý", 0.942),
        Letter("z", 2.123),
        Letter("ž", 1.022)
    };

    int counter = 0;

    for (int x = 0; x < (sizeof(array)/sizeof(*array)); x++)
    {
        if (array[x].letter != "ch")
        {
            char current = array[x].letter[0];
            for (int i = 0; i < original.length(); i++)
            {
                if (current == original[i])
                {
                    if (!(original[i] == 'c' && i < original.length() && original[i + 1] == 'h') && !(original[i] == 'h' && i > 0 && original[i - 1] == 'c'))
                    {
                        array[x].count++;
                        counter++;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < original.length() - 1; i++)
            {
                if (original[i] == 'c' && original[i + 1] == 'h')
                {
                    array[x].count++;
                    counter++;
                    i++;
                }
            }
        }
    }

    double sum = 0;
    for (int i = 0; i < (sizeof(array)/sizeof(*array)); i++)
    {
        array[i].percentageNew = (double) array[i].count / counter * 100;
        array[i].percentageDifference = std::abs(array[i].percentageOriginal - array[i].percentageNew);
        sum += array[i].percentageDifference;
        array[i].Log();
    }
    double avg = sum / 42;
    cout << avg << " - " << sum << " < " << counter << endl;
    cout << "-----------------------------------" << endl;
}