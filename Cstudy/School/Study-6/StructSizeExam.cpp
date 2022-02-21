#include <iostream>

using namespace std;

//한 바이트 
#pragma pack (push,1)
struct ExamSize
{
    char a; //1
    int b; //4
    double c; //8
};
#pragma pop

int main(int argc, char* argv[])
{
    cout << "Structure ExamSize's each Member variable siz : " <<endl;
    cout << "char : " << sizeof(char) << " , " << sizeof(int) << ", " <<sizeof(double) << endl;

    cout << "Size of structure : " << sizeof(ExamSize) <<endl;
}
