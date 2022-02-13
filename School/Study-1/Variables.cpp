#include <iostream>
#include <stdio.h>
#include "header.cpp"
#include <string>

using namespace std;

int main() 
{
    int nNum = 6;
    float fNum = 6.12345678;
    double dNum = 8.123456789123456;
    char cLetter = 'A';
    bool isVar =true, isFalse = false;
    string strText = "Hello\tWorld!!! \a";
    int isNumber = true;

    cout << "int : " << nNum << endl;
    cout.precision(7);  //lentth
    cout << "float : " << fixed <<fNum << endl;
    cout.precision(15); //마지막 까지 영향을 받는다
    cout << "double : " << fixed <<dNum << endl;
    cout << "char : " << cLetter << endl;
    cout << "bool isVal : " << isVar << ", bool is False : " << isFalse << ", isNumber : " << isNumber << endl;
    cout << "string : " << strText << endl;
    // 정수를 찍어보고 싶을때
    // %x 16진수 , %d 정수
    printf("cLetter number : %x \r\n", cLetter);
    cout << "==============================" << endl;

    float f1 = 24e3;
    double d1 = 15e4;
    cout << "f1 : " << f1 << ", d1 : " << d1 << endl;

    // 한줄로도 표현 가능
    // 십진수로 표현
    // asci 는 127까지만
    char chA = 'A';
    char chAA = 0x41;
    char chBB = 0x42;
    char chCC = 0x43;

    // int 로 형 변환 , 그래서 공간을 아낄수 있다 
    // (int)chA = 65
    cout << "chA : " << chA << endl;
    cout << chAA << chBB << chCC << endl; 

    string strGreeting = "Hello C++ !!!";


    return 0;
}


// int main(int argc, char* argv[])
// {
//     // n 은 변수가 무엇을 의미하는지 표시한느 습관
//     const int nNumber =10;
    
//     cout << nNumber << endl;

//     // 상수 설정
//     const int iMinutesPerHour =60;
//     // 실수
//     const float PI = 3.141592;
//     cout << iMinutesPerHour << NEW_LINE;
//     cout << "PI = " << PI << endl;
//     printf("iMinutesPerHour[%d], PI[%f]", iMinutesPerHour, PI );

//     cout << "Define const WIDTH " << WIDTH << NEW_LINE;
//     cout << "Define const HEIGHT " << HEIGHT << NEW_LINE;

//     if(argc >1)
//     {
//         cout << "argc = " <<argc << endl;

//     }


//     return 0;
// }

