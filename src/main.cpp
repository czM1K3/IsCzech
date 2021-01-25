#include <iostream>
#include <windows.h>
#include <fstream>
#include "Calculator.h"

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    Calculator calc;

    ifstream file("input.txt");
    string str;
    while (getline(file, str))
    {
        calc.Calculate(str);
    }
    

    return 0;
}