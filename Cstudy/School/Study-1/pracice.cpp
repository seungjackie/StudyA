#include <iostream>
#include <stdio.h> //input output

using namespace std;

// 0번째방 자기방
// argc 아규먼트 배열 포인트
int main(int argc, char* argv[])
{
    // 1번째방
    int num;
    // 초기화
    num = 15;
    cout << num  << "\n";
    
    if(argc >1)
    {
        cout << "argc = " << argc << endl;
        for(int i =0; i < argc ; i++)
        {
            cout << "argv[" << i << "]" << "=" << argv[i] <<endl;
        }
    }

    // 정수
    double fNum =99.99;
    char cLetter = 'A'; //single
    string strText = "Hello C++ !!!";

    cout << "fNum = " << fNum << ", cLetter = " << cLetter <<  ", strText ="  << endl;
    //실수 출력
    // string 지원 안한다
    // fnum 은 floatNum[%f]  , cLetter는 charLetter[%c]
    printf("floatNum[%f], charLetter[%c] \n", fNum,cLetter);

    int x = 15, y = 21, z= 60;

    cout << "x = " << x << "y = " << y << "z ="<< z << endl;
    cout << "sum = " << x + y << endl;

    return 0;
}