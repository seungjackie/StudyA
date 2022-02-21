#include <iostream>

using namespace std;

void MyFunc(void)
{
    cout << "My Func(void) called " << endl; 
}

void MyFunc(char c)
{
    cout << "My Func(char c) called " << endl;
}

void MyFunc(int a, int b)
{
    cout << "MyFunc (int a, int b) called" << endl;
}

//왜 이런지 이유 알아보자
int main()
{
    MyFunc();
    MyFunc('a');
    MyFunc(12, 13);
    return 0;
}