#include <iostream>
#include "Calculator.h"
#include <windows.h>

using namespace std;

int main(){
    SetConsoleOutputCP(CP_UTF8);
    Calculator calc;
    calc.Calculate("bum");
    
    return 0;
}