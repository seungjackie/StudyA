#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string이라는 문자열 재정리
    string firstName = "James";
    string lastName = "Hetfield";
    string equip = "ESP Explporer Guitar";
    // string 은 ''해도 되지만 "" 를 추천한다
    // string fullNameEquip = firstName + "," + lastName + ", " + equip;
    string fullNameEquip = firstName.append(lastName.append(equip));


    cout << fullNameEquip << endl;

    string strAlphbet = "ABVFDAADSF";

    cout << "strAlphabet : length" << strAlphbet.length() <<endl;
    cout << "strAlphabet : size" << strAlphbet.size() <<endl;

    string strHello ="Hello world!!!";
    cout << strHello[0] << endl;
    strHello[0]='J';
    for(int i=0; i < strHello.length(); i++)
    {
        cout << strHello[i];
    }
    cout << endl;

    string baseballTeam;
    cout << "Enter your favorite baseball Team : ";
    getline(cin, baseballTeam);
    // line
    cout << baseballTeam << endl;

    return 0;

}