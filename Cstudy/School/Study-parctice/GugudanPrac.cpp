#include <iostream>

using namespace std;

void Increament(int* start, int* stop)
{
    int* current = start;
    while(current !=stop)
    {
        for(int i = 1; i< 10 ; i++)
        {
            cout << *current * i <<endl;

            break;
        }
        // ++(*current);
        // ++current;
    }
}

void PrintAll(const int* start, const int* stop)
{
    const int* current = start;

    while (current !=stop)
    {
        cout << *current <<endl;
        ++current;
    }
    
}

int main()
{
    int nNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // pointer 넘기기
    Increament(nNumbers, nNumbers +9);
    PrintAll(nNumbers, nNumbers+9);

    return 0 ;
}