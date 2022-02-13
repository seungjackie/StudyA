#include <iostream>

using namespace std;

int main()
{
    // int* ptrInt =new int;
    // *ptrInt = 1024;

    // // 자기가 하고싶은 방에 할당
    // // 주소값을 준다
    // double* ptrDouble = new double;
    // *ptrDouble = 3.141592111;

    // // 방에있는 내용 *ptrInt
    // cout << "int type ptr value : " << *ptrInt << endl;
    // cout << "double type ptr value : " << *ptrDouble << endl;

    // if(ptrInt != NULL)
    // {
    //     delete ptrInt;
    //     ptrInt = NULL;
    // }

    // if(ptrDouble != NULL)
    // {
    //     delete ptrDouble;
    //     ptrDouble = NULL;
    // }

    // 그냥 delete 하면 쓰레기 값이 남아있다
    // delete ptrInt;
    // delete ptrDouble;

    // 방
    char * pChar = new char;
    *pChar = 'a';
    // 방에 있는 내용을 출력
    cout << "Memory address : " << (void*)pChar << "\t value : " << *pChar << endl; 
    cout << "Heap size : " << sizeof(*pChar) << endl;
    if(pChar != NULL)
    {
        delete pChar;
        pChar = NULL;
    }

    int* ptrNum = new int;
    *ptrNum = 24;
    cout << "Memory address : " << (void*)ptrNum << "\t value : " << *ptrNum << endl; 
    cout << "Heap size : " << sizeof(*ptrNum) << endl;
    if(ptrNum != NULL)
    {
        delete ptrNum;
        ptrNum = NULL;
    }

    float* ptrFNum = new float;
    *ptrFNum = 3.14;
    cout << "Memory address : " << (void*)ptrFNum << "\t value : " << *ptrFNum << endl; 
    cout << "ptrFNum Heap size : " << sizeof(*ptrFNum) << endl;
    if(ptrFNum != NULL)
    {
        delete ptrFNum;
        ptrFNum = NULL;
    }

    double* ptrDNum = new double;
    *ptrDNum = 3.141592;
    cout << "Memory address : " << (void*)ptrDNum << "\t value : " << *ptrDNum << endl; 
    cout << "ptrDNum Heap size : " << sizeof(*ptrDNum) << endl;
    if(ptrDNum != NULL)
    {
        delete ptrDNum;
        ptrDNum = NULL;
    }

    return 0;

}