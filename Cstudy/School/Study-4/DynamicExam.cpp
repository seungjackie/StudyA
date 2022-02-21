#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int i ,totalLen;
    int arrLen = 3, addLen=2 ;
    int* ptrArr;

    // ptrArr = (int*)malloc(arrLen * sizeof(int)); // dynamci allocation memory
    ptrArr = (int*)calloc(arrLen , sizeof(int)); // dynamci allocation memory

    if(ptrArr == NULL) //dynamic allocation faill 메모리 없는경우
    {
        cout << "Dynamic memory allocation fail... " << endl;
        exit(1); //에러나 종료하고싶을 때 
    }

    cout << "Dynamic allocation memory intial value : \n ";
    for(int i= 0 ; i < arrLen ; i++)
    {
        cout << ptrArr[i] << endl;

    }
    totalLen = arrLen + addLen;
    ptrArr = (int*)realloc(ptrArr, (totalLen * sizeof(int)));

    if(ptrArr == NULL) //dynamic allocation faill 메모리 없는경우
    {
        cout << "Dynamic memory allocation fail... " << endl;
        exit(2); //에러나 종료하고싶을 때 
    }

    cout<< "Dynamic reaallocation memory intial value : \n";
    for(int i= 0 ; i < arrLen ; i++)
    {
        cout << ptrArr[i] << endl;
    }

    free(ptrArr);

    return 0; 
}