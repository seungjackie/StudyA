#include <iostream>

using namespace std;

void IncreamentAll(int* start, int* stop)
{
    int* current = start;
    //current 값을 변경하면서 사용
    while(current != stop)
    {
        ++(*current); //주소 값 //increament value pointed(data)
        ++current; //주소 // increament value pointer(address)

    }

}

void PrintAll(const int* start, const int* stop)
{
    const int* current = start;

    while(current != stop)
    {
        cout << *current << endl;
        ++current; 
    }
}

int main()
{
    int nNumbers[] = {10, 20, 30};
    //pointer 넘기는것
    IncreamentAll(nNumbers, nNumbers + 3 );
    PrintAll(nNumbers, nNumbers +3);

    return 0 ;
}