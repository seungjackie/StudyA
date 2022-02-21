#include <iostream>
#include <string>

using namespace std;

namespace first_space
{
    void myFunc()
    {
        cout << "This function is in first_space" << endl;
    }
    namespace second_space
    {
        void myFunc()
        {
            cout << "This function is in second_space\n";
        }
    }
    namespace third_space
    {
        void myFunc()
        {
            cout << "This function is in third_space\n";
        }
    }
}

using namespace first_space;

int main()
{
    std::string strHello = "Hello World!!!";
    myFunc();
    second_space::myFunc();
    third_space::myFunc();

    cout << strHello << endl;
}