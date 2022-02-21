#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int x =  100 + 200;
    int y = x + 400;
    float z = (float)y /(float) x ;
    int xx = y % x ;

    cout << "x = " << x << endl; 
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    // 나누고 나머지 연산자
    cout << "xx = " << xx << endl;

    int nNumber = 10;
    nNumber -= 25;

    cout << "nNumber : " << nNumber << endl;

    int isX = 10, isY = 10;
    cout << "Return  Value" << (isX == isY) << endl;

    //60 : 0011 1100, 13 : 0000 1101
    unsigned char A = 60, B= 13 ;
    cout << "(A & B)" << bitset<8>(A & B) << endl;
    cout << "(A | B)" << bitset<8>(A | B) << endl;
    cout << "(A ^ B)" << bitset<8>(A ^ B) << endl;
    cout << "~A" << bitset<8>(~A) << endl;

    return 0;
}