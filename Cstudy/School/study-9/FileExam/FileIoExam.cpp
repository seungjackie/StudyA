#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char data[100];

    ofstream outputFile;
    outputFile.open("simplefile.dat");

    cout << "Writing to the file " << endl;
    //data에 받고 100byte로 받아
    cout << "Enter Your Nmae : " ; cin.getline(data, 100);

    outputFile << data << endl;

    cout << "Enter your age : ";
    cin >> data;
    cin.ignore();

    outputFile << data <<endl;
    outputFile.close();

    ifstream inputFile;
    inputFile.open("simplefile.data");

    cout << "Reading from the simplefile.data" <<endl;
    inputFile >> data;
    cout << data << endl;

    inputFile.close();

    return 0;

}