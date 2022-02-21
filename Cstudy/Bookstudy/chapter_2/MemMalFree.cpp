#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char* MakeStrAdr(int len)
{
    char* str =(char*)malloc(sizeof(char)*len);
    return str;
}

int main(void)
{   
    char* str = MakeStrAdr(20);     //크기
    strcpy(str, "I am so Happy~");  //str 은 20 이다
    cout << str << endl;
    free(str);                      //void 는 free
    return  0;
}