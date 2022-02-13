#include <iostream>
#include "Print.hpp"

using namespace std;

int main()
{
    CPrint printData;

    printData.print(4);
    printData.print(3.1415);
    // type 명시
    printData.print((char *)"Hello World!!!");

    cout << "Hello C++ \n";

    return 0;
}