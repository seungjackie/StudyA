#include <iostream>

using namespace std;

//함수 원형만 
void increase(void* data, int pSize);


int main()
{
    char a = 'x';
    int b = 1024;
    increase(&a, sizeof(a));
    increase(&b, sizeof(b));

    cout << "a : " << a << ", b : " << b << endl;

    return 0;
}

void increase(void* pData, int nSize)
{
    if(nSize == sizeof(char))
    {
        // pointer 는 앞에 p 를 붙힌다
        char* pChar;
        // 형 변환 *pChar를 바꿀거다
        pChar = (char*)pData;
        ++(*pChar);
    }
    else if(nSize == sizeof(int))
    {
        int* pInt;
        pInt = (int*)pData;
        ++(*pInt);
    }
}