#include <iostream>
#include "person.hpp"

int main()
{
    // static 멤버는 모두 공유
    CPerson* pLas = new CPerson("Lass Ulich", 59);
    CPerson* pJames = new CPerson("James Hetfield", 57);
    CPerson* pKir = new CPerson("Kirt Hamett", 60);
    CPerson* pRobert = new CPerson("Robert Trugjilo", 58);

    cout << "Currently Created People : " << CPerson::PersonCount() << endl;

    //delete 꼭하기
    if(pLas != NULL) delete pLas;
    if(pJames != NULL) delete pJames;
    if(pKir != NULL) delete pKir;
    if(pRobert != NULL) delete pRobert;
}