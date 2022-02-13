#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // const char* pStr = "This is character string pointer";
    // //str 구하는 함수 ,C 함수이다
    // // 파일 읽는것을 직접 할수 있다
    // // null 값이 있음으로 +1  
    // char* pStrDest = (char*)calloc(strlen(pStr) + 1, sizeof(char));

    // cout << "pStrDest Lenght : " << strlen(pStrDest) << endl;
    // strncpy(pStrDest, pStr, strlen(pStr) + 1);
    // cout << "pStrDest Lenght : " << strlen(pStrDest) << endl;
    // cout << "pStrDest  : " << pStrDest << endl;


    // free(pStrDest);

    char cAlphabet, *pAlphabet, *ptr;
    pAlphabet = (char*)calloc(35, sizeof(char));

    if(pAlphabet ==NULL)
    {
        cout << "Dynamic allocation fail.. " <<endl;
        exit(1);
    }

    ptr = pAlphabet;

    //메모리
    for(cAlphabet = 0x41; cAlphabet < 0x60; cAlphabet++)
    {
        //포인터 주소이동
        *ptr++ = cAlphabet;
    }
    // 하나의 캐릭터, 할당
    // 문자열의 마지막은 NULL
    *ptr = '\0'; //포인터는 '\0' 을 가리킨다 

    // 첫포인터 갖다쓰기 위한 조건
    cout << "Alphabet String : " << pAlphabet << endl;

    free(pAlphabet); 

    return 0;
}