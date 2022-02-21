#include <iostream>

using namespace std;

template <typename T>
void Swap(T& a, T& b);

// 특정값 무시 
template <> void Swap<double>(double&, double&)
{
    //Do not swapping double number
}

template <typename T>
T const& Max(T const& a, T const& b);

int main()
{
    int c = 12, d = 15;

    cout << "c : " << c << ", d : " << d << endl;
    Swap(c,d);
    cout <<  "after swap => " << " c : " << c << ", d : " << d << endl;

    double x = 12.45 , y = 72.12;
    cout << "x : " << (double)x << ", y : " << (double)y << endl;
    Swap(x,y);
    cout <<  "after swap => " << " x : " << (double)x << ", y : " << (double)y << endl;

    string strA = "Hello", strB ="World";
    cout << "strA : " << strA << ", str8 : " << strB << endl;
    Swap(strA,strB);
    cout <<  "after swap => " << " strA : " << strA << ", strB : " << strB << endl;

    cout << "Max value : " << Max(c, d) << endl; 

    cout << "int Max value : " << Max(c, d) << endl;
    cout << "double Max value : " << Max(x, y) << endl;
    cout << "string Max value : " << Max(strA, strB) << endl;
}

//함수 본체 
//명시적으로 표현
template <typename T>
void Swap(T& a, T& b)
{
    // return 없는 이유는 참조 하기 위해서
    // T temp;
    // temp = a;
    // a = b;
    // b = temp;
}




template <typename T>
T const& Max(T const& a, T const& b)
{
    return a < b ? b : a;
}