#include <iostream>
#include <string>

using namespace std;

int main()
{
    string food = "hamberger";
    string* ptrFood = &food;

    //주소 참조 연산자
    cout << " food : " << food  << "Address of food : "<< &food<< endl;
    cout << " prtFood : " << ptrFood  << "Address of food : " << &ptrFood<< endl;

    //그 주소값이 가리키는 값을 바꿔보자
    *ptrFood = "Pizza";

    cout << " food : " << food  << "Address of food : "<< &food<< endl;
    cout << " prtFood : " << *ptrFood  << "Address of food : " << ptrFood<< endl;


    // int nNumber = 1234;
    // int* ptrNumber = &nNumber;

    // cout << " nNumber : " << nNumber  << "Address of nNumber : "<< &nNumber<< endl;
    // cout << " ptrNumber : " << *ptrNumber  << "Address of ptrNumber : " << ptrNumber<< endl;
}