#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    string readString;
    ifstream readFile("simplefile.txt");

    while (getline(readFile, readString))
    {
        cout << readString;
    }
    
    
    
    return 0;
}