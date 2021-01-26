#include <iostream>
#include <string>
#include <cmath>
#include <regex>
#include <time.h>
#include "Calculator.h"

using namespace std;

void Calculator::Calculate(string original)
{
    time_t start = time(0);
    Letter array [42] = {
        Letter("ch", 1.007),
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

    transform(original.begin(), original.end(), original.begin(), [](unsigned char c){return std::tolower(c);});

    int counter = 0;

    for (int x = 0; x < (sizeof(array) / sizeof(*array)); x++)
    {
        string current = array[x].letter;
        while (std::strstr(original.c_str(), current.c_str()))
        {
            int pos = original.find(current);
            original.erase(pos, current.length());
            array[x].count++;
            counter++;
        }
        cout << ".";
    }
    cout << endl;

    double sum = 0;
    for (int i = 0; i < (sizeof(array)/sizeof(*array)); i++)
    {
        array[i].percentageNew = (double) array[i].count / counter * 100;
        array[i].percentageDifference = std::abs(array[i].percentageOriginal - array[i].percentageNew);
        sum += array[i].percentageDifference;
        //array[i].Log();
    }
    double avg = sum / 42;
    cout << avg << " - " << sum << " < " << counter << " << " << difftime(time(0), start) << "s" << endl;
    cout << "-----------------------------------" << endl;
}