#include <iostream>
#include <list>

using namespace std;

// 둘다 가능 
// template <class T>
template <typename T>
void PrintList(list<T>& lst)
{
    cout << "[";
    for(const auto& ele : lst)
        cout << ele << " " ;

    cout << "]\n";
}



int main()
{
    list<int> nList;

    nList.push_back(10);
    nList.push_back(20);
    nList.push_back(30);
    nList.push_back(40);

    // 어디서 부터 어디 까지
    for(list<int>::iterator itr = nList.begin(); itr != nList.end(); ++itr)
    {
        cout << *itr << endl;
    }
    cout <<"============================" << endl;

    cout << "Initial status at list" << endl;
    PrintList(nList);

    for(list<int>::iterator itr = nList.begin(); itr != nList.end(); ++itr)
    {
        //20앞에다가 insert
        if(*itr == 20)
            nList.insert(itr, 50);
    }

    cout << "element value before 20 insert 50" << endl;
    PrintList(nList);

    for(list<int>::iterator itr = nList.begin(); itr != nList.end(); ++itr)
    {
        if(*itr == 30)
            {
            nList.erase(itr);
            break;  //이미 원소가 지워졌는데  갚이해주기 때문에 break로 나가야함
            }        // 지워진 만큼 돌려고 한거다
    }

    cout << "element value 30 deleted" << endl;
    PrintList(nList);

    return 0;


}

