#include <iostream>
using namespace std;

int main(void)
{
    int num1= 1020;
    int &num2=num1;

    num2 =3048;
    cout << "VAL : " << num1 <<endl;
    cout << "REF : " << num2 << endl;

    cout << "Val : " << &num1 << endl;
    cout << "Ref : " << &num2 << endl;
}