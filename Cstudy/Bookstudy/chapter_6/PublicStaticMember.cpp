#include <iostream>
using namespace std;

class SoSimple
{
public:
    static int simObjCnt;
public:
    SoSimple()
    {
        simObjCnt++;
    }
};
int SoSimple::simObjCnt = 0;

int main(void)
{
    cout << SoSimple::simObjCnt << " A SoSimple 1 :" << endl;
    SoSimple sim1;
    SoSimple sim2;

    cout << SoSimple::simObjCnt << "B SoSimple 2 : " << endl;
    cout << sim1.simObjCnt << "C SoSimple 3 : " << endl;
    cout << sim2.simObjCnt << "D SoSimple 4 : " << endl;
    return 0;
}