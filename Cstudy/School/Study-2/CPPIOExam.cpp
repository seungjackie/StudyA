#include <iostream>

using namespace std;

int main()
{
    // int x;

    // cout << "Input a number : x";
    // // 입력받을 변수 지정
    // cin >> x;
    // cout << "Your Input Number : " << x <<endl;


    // int x, y;
    // int nSum;

    // cout << "Input x Number : ";
    // cin >> x; cout << endl;
    // cout << "Input y Number :";
    // cin >> y; cout << endl;

    // nSum = x + y;
    // cout << "nSum :" << nSum << endl;

    char strName[50];

    cout << "Enter Your Name : ";
    cin >> strName ; cout << endl;
    cout << "Your name is " << strName << endl;

    // error 메세지 띄울때
    // string 없을때 배열로
    char strErr[] = "Welcome to here";
    cerr << "Error Message : " << strErr << endl;

    char strLog[] = "we gonna";
    clog << "Log message : " << strLog << endl;


    return 0;
}