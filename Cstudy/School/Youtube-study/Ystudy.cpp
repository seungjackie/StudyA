#include <stdio.h>

int main(void)
{
    // 자료형 ( 크기단위 , byte)
    // 정수형 : char(1) , short (2), int (4), long (4), long long (8)
    // 실수형 : float(4), double (8)

    int i = 0;

    // 1 바이트로 양수만 표현
    // 256 -> 0~255
    unsigned char c = 0; //양의 정수
    //대입 연산자
    c = 0;
    c = 255;
    c = -1;


    // 음수
    // -127 ~ 0 ~127 128가지 
    //pointer 와 연관
    char c1 = 0;
    c1 = 255;

    // 음의 정수 찾기 (2의 보수법)
    // 대응되는 양수의 부호를 반전 후 , 1을 더 한다 






    return 0;
}