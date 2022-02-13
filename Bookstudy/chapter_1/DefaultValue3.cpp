#include <iostream>

using namespace std;

int BoxVolume(int length = 1, int width = 2, int height =1 );

int main()
{
    cout << "[3, 3, 3} : " << BoxVolume(3, 3, 3) << endl;
    cout << "[5, 5, d] : " << BoxVolume(5, 5) <<endl;
    cout << "[7, 5, d] : " << BoxVolume(7) <<endl;
    cout << "[1, 5, d] : " << BoxVolume(7) <<endl;
    cout << "[d, d, d] : " << BoxVolume() <<endl;
}

int BoxVolume(int length,  int width, int height)
{
    return length*width*height;
}