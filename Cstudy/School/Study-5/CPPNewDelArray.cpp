#include <iostream>

using namespace std;

int main()
{
    int n;
    int* ptrNumber;
    
    cout << "How many numbers input ?"; cin >> n;
    ptrNumber = new int[n];
    if(ptrNumber == nullptr)
    {
        cout << "Error memory could not be allocated \n" ;
        exit(1);
    }
    else
    {
        for(int i = 0; i < n ; i++)
        {
            //n번째 방에 받아주자
            cout << "Enter a number : "; cin >> ptrNumber[n];
        }
    }

    cout << "You have entered";
    for ( int i = 0; i < n ; i++)
    {
        cout << ptrNumber[i] << ", ";
    }

    delete[] ptrNumber;



    return 0;
}