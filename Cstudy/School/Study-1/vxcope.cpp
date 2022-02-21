#include <iostream> //input output stream

// global
int gVar;

int main()
{
    int a, b;
    int c, 
    // int gVar;

    a = 10;
    b = 40;
    c = a+b;
    gVar = a + b;

    // using 안 쓰면 std
    std::cout << "c = a + b : " << c<<std::endl;
    //global
    std::cout << "gVar = " << gVar << std::endl;

    return 0;
}