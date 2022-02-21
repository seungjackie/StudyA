#include "person.hpp"

//초기화를 위해
CPerson::CPerson(const string& strName, int nAge)
{
    m_strName = strName;
    m_nAge =nAge;
    cout << "No." << ++m_nPersonCount << "Create Person" << endl;
}

//파괴자
CPerson::~CPerson()
{
    m_nPersonCount--;
    cout << "Peorson Count " << m_nPersonCount << endl;
}

void CPerson::ShowPersonInformatioin()
{
    cout << "This person's name " << m_strName << ", Age : " << m_nAge <<endl;

}

int CPerson::PersonCount() //static member
{
    return m_nPersonCount;
}