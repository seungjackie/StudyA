#include <iostream>
#include <string>

using namespace std;
void abc(int& x)
{
    x = 100;
    cout << x << endl;
}

int main()
{
    string food = "Pizza";
    string& meal = food; // 참조 변수
    meal ="Hamburger";

    //주소값
    cout << food << "Address of food: " << &food << endl; 
    cout << meal << "Address of food: " << &meal << endl;

    int xx = 200;
    abc(xx);
    cout << "xx : " << xx << endl;
}