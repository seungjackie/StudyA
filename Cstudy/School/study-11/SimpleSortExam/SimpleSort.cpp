#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
void PrintVector(T begin,T end) // 배열임으로 () 안함
{
    while( begin != end) // 처음부터 끝까지
    {
        cout << *begin << " ";
        begin++;
    }
    cout << endl;
}

int main()
{
    vector<int> vec;
    vec.push_back(5);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(0);
    vec.push_back(9);
    vec.push_back(8);
    cout << "Before sorting\n";
    PrintVector(vec.begin(), vec.end());

    sort(vec.begin(), vec.end());
    cout << "After sorting\n";
    PrintVector(vec.begin(), vec.end());

    return 0;
}