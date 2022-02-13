#include <iostream>

using namespace std;

void HelloFuc()
{
    cout << "Welcome to C++ Hell!!!" << endl;
}

void HelloWorld(string strName)
{
    cout << "Hello " << strName << endl;
}

void WhereAreYouFrom(string strName, int nAge, string strCountry = "KOREA")
{
    cout << "My name is" << strName << "and my Age is " << nAge<< "!!!! \n";
    cout << "I came from" << strCountry << "!!!! \n";
}

int HowOldAreYou(int nAge)
{
    int age = nAge;

    return age;
}

void SwapInt(int& x , int& y)
{
    int temp = x;

    x = y;
    y = temp;
}

int main()
{
    HelloFuc();
    HelloWorld("SiEun");
    HelloWorld("HyeJin!!");

    WhereAreYouFrom("USA", 20);
    WhereAreYouFrom("CANADA", 40);
    WhereAreYouFrom("France", 60);
    WhereAreYouFrom("James HETfiled" , 20); //default 값

    cout << "My age : " << HowOldAreYou(26) << endl;

    cout << "========================================================== \n";
    int nFirst = 10 , nSecond = 30;
    cout << "Bofore swap nFirst [" << nFirst << "], nSecond{" << nSecond << "] \n";
    SwapInt(nFirst, nSecond);
    cout<< "Bofore swap nFirst [" << nFirst << "], nSecond{" << nSecond << "] \n";

    return 0;
}