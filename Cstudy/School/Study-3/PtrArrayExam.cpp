#include <iostream>

using namespace std;

int main()
{
    int arrNumber [5]; 
    int* ptr;  //*가 int 앞에 붙는다 요즘시대엔

    //변수에다가 넘버주소를 준다 //방이 아니다
    // arrNumber[0] 
    ptr = arrNumber; *ptr = 10;  

    //arrNumber[1]
    //더하기값이 아니라 4가 올라간다 int 는 4바이트
    ptr++ ; *ptr = 20;

    ptr = &arrNumber[2]; *ptr = 30; //ArrNumber[2]
    ptr = arrNumber +3; *ptr = 40; //ArrNumber[3]
    ptr = arrNumber; *(ptr +4) = 50; //ArrNumber[4] ptr에 4

    for(int i = 0; i < 5 ; i++)
        cout << "[" << i << "] =" << arrNumber[i] << endl;

}