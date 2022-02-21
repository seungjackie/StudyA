#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

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

class IntCompare
{
public:
    // Descending sorting operator (내림차순)
    bool operator()(const int& a,const int& b ) const { return (a > b); }   
};

template <typename T1, class T2>
class GreaterComp
{
public:
    bool operator()(const T1& a,const T2& b ) const { return (a > b); }   
    
};

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

    // 방법 1
    // sort(vec.begin(), vec.end(), IntCompare());
    // 방봅 2
    sort(vec.begin(), vec.end(), GreaterComp<int, int>());
    //이미 있는 방법이 있다
    // sort(vec.begin(), vec.end(), greater<int>());

    cout << "After sorting\n";
    PrintVector(vec.begin(), vec.end());

    return 0;
}