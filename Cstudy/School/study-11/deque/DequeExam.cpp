#include <iostream>
#include <deque>

using namespace std;

//최신 코딩
template <typename T>
void PrintDeque(deque<T>& dq)
{
    cout << "[";
    for(const auto& ele : dq)
    {
        cout << ele << " ";

    }
    //한줄로 붙혀쓰는편이 좋다 관리하기도 좋음
    cout << "]";
}

int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    cout << "Initial statue of deque" << endl;
    PrintDeque(dq);

    cout << "delete front element" << endl;
    dq.pop_front();     // 맨 먼저 들어간 10
    PrintDeque(dq);

    return 0;
}