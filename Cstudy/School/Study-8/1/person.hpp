#include <iostream>
#include <string>

using namespace std;


class CPerson
{
private:
    string m_strName;
    int m_nAge;

public:
    //생성자는 최상단
    CPerson(const string& strName, int nAge);
    //파괴자
    ~CPerson();
    static int m_nPersonCount;
    static int PersonCount();
    void ShowPersonInformatioin();
};

//외부에서 초기화

int CPerson::m_nPersonCount =0; //Intialize static member variale