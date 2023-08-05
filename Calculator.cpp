#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
    switch(oper)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            if(y == 0)
                throw "Division by zero condition!";
            return x / y;
        default:
            throw "Unsupported operation!";
    }
}
