#include <iostream>
#include <string>

using namespace std;

int main()
{
    //방이 3개 
    int grade[3] = {85, 65, 90};
    int &refGrade = grade[0];

    //주소 접근
    cout << grade << endl;
    for (int i = 0; i < 3 ; i++)
    {
        cout << &refGrade + i << endl;
    }

    string itCompany[5] = {"Apple", "Microsft", "IBM", "Amazon", "Esp guitar"};
    // string itCompany[5];
    // itCompany[0] = "Apple";
    // itCompany[1] = "Microsft";
    // itCompany[2] = "IBM";
    // itCompany[3] = "Amazon";
    // itCompany[4] = "guitar";
    cout << itCompany[4] <<endl; 
    //인덱스 접근
    // itCompany[0] = "Snakebyte Guitar";
    // for (string str : itCompany)
    //     cout << str <<endl; 

    int nNumber[] = {12, 34, 54, 56};
    for(int i = 0; i < (sizeof(itCompany)/sizeof(itCompany[0])); i++)
        cout << "sizeof itCompany: [" << i <<"]" << itCompany[i] << endl;
    
    return 0;
}