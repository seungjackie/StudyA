#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void PrintVector(std::vector<T>& vc)
{
    //print all vector elements
    cout << "[";
    for(typename vector<T>::iterator itr = vc.begin(); itr != vc.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << "]\n";
}

int main()
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(20);

    cout << "Initate status vector " << endl;
    PrintVector(vec);

    vector<int>::iterator itr =vec.begin() +2;  //vec[2]
    *itr = 50;
    cout << "=================================" << endl;
    PrintVector(vec); //출력

    // const
    vector<int>::const_iterator citr = vec.begin() + 2;

    // cannot assign to const iteraot value change
    // *citr = 70;


    return 0;
}