#include <iostream>
#include <vector>

using namespace std;

template <typename T>
// 어느타입이든 하겠다
void PrintVector(vector<T>& vc)
{
    // 타입네임을 써야한다 T 의존적이다
    for(typename vector<T>::iterator itr =vc.begin(); itr != vc.end(); ++itr)
        cout << *itr << endl;
}

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << "first vector state " << endl;
    PrintVector(vec);
    cout << "===========================================" << endl;

    // insert before vec[2]
    vec.insert(vec.begin() + 2,55); //3번째 숫자 바꾸기
    PrintVector(vec);

    cout << "===========================================" << endl;

    //erase vec[3]
    vec.erase(vec.begin() + 3); //4번째 숫자 지우기
    PrintVector(vec);

    return 0;
}