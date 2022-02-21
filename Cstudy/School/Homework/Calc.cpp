#include <iostream>

using namespace std;

double Add(double, double);
double Sub(double, double);
double Mul(double, double);
double Div(double, double);
// callback
double Calc(double, double, double (*func)(double, double));

int main()
{
    double(*calc)(double, double) =nullptr;
    //소수점 실수 (" . ") 
    double dNum1 = 3., dNum2 = 4., result = 0.; 
    char oper = '+';

    cout << "계산할 두 숫자 입력 \n";
    cin >> dNum1 >> dNum2;
    cout << "연산할 기호를 입력 [ +, -, *, / ] \n>>";
    cin >> oper;

    switch(oper)
    {
        case '+' :
            calc =Add;
            break;
        
        case '-' :
            calc = Sub;
            break;
        
        case '*' :
            calc = Mul;
            break;

        case '/':
            calc = Div;
            break;
        
        default :
            cout << "Support( +, -, *, /)" << endl;
            break;
    }

    result = Calc(dNum1, dNum2, calc);
    cout << "The result : " << result <<endl;

    return 0;
}

double Add(double dNum1, double dNum2)
{
    return dNum1 + dNum2;
}

double Sub(double dNum1, double dNum2)
{
    return dNum1 - dNum2;
}

double Mul(double dNum1, double dNum2)
{
    return dNum1 * dNum2;
}

double Div(double dNum1, double dNum2)
{
    return dNum1 / dNum2;
}

double Calc(double dNum1, double dNum2, double(*func)(double, double))
{
    return func(dNum1, dNum2);
}
