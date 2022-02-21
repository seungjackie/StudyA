#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    //iterator itr
    //++itr 도 괜찮다
    for(vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr)
    {
        cout << "vector itr : " << *itr << endl;
    }

    //iterator 를 쓸때 포인터 연산자를 쓴다
    vector<int>::iterator itr =vec.begin() +2;
    cout << "third element : " << *itr << endl;
}