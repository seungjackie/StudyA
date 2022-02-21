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

// auto
template <typename T>
void print_vector_range_based(std::vector<T>& vec)
{
    for (const auto& elem : vec)
    {
        cout << elem << endl; 
    }
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

    // Revers
    cout << "Revers Vector Print " << endl;
    cout << "=================================" << endl;
    vector<int>::reverse_iterator ritr = vec.rbegin();
    cout << "[";
    for(; ritr != vec.rend(); ritr++ )
    {
        cout << *ritr << " ";
    }
    cout << "] \n";


    vector<int> nVector;
    nVector.push_back(1);
    nVector.push_back(2);
    nVector.push_back(3);

    // for(vector<int>::size_type i = nVector.size() -1; i >= 0; i-- )
    // {
    //     cout << nVector[i] << endl;
    // }

    for (int elem : nVector)
    {
        cout << "element : " << elem <<endl;
    }
    
    // auto
    print_vector_range_based(nVector);

    auto nNum = 10;
    auto strHello = "hello";
    cout << "nNum : " << nNum << ", strHello : " << strHello << endl;


    return 0;
}