#include <iostream>
#include <fstream>
#include "Calculator.h"

#ifdef WIN32
#include <windows.h>
#endif

using namespace std;

int main()
{
#ifdef WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    Calculator calc;

    ifstream file("input.txt");
    string str;
    while (getline(file, str))
    {
        calc.Calculate(str);
    }

    return 0;
}
