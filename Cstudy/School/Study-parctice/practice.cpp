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
    
    double fNum = 
    

    return 0;
}