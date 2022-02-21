#include <iostream>
#include <map>
#include <string>

using namespace std;

template <typename K, typename V>
void PrintMapElement(map<K, V>& m )
{
    for(auto itr = m.begin(); itr != m.end(); ++itr)
    {
        //첫번째 키, 두번째 값, 포인터
        cout << itr->first << ", " << itr->second << endl;
    }
}


int main()
{
    map<string, double> pitcherList;

    // insert 할때 pair 를 쓴다, 키 , 밸류
    pitcherList.insert(std::pair<string, double>("Kershaw", 0.12));
    pitcherList.insert(std::pair<string, double>("DDung", 7.89));
    pitcherList.insert(std::pair<string, double>("Otani", 5.34));

    // pair와 다른 방법
    pitcherList.insert(std::make_pair("Chanho", 2.12));
    pitcherList.insert(std::make_pair("SunWoo", 3.14));
    pitcherList.insert(std::make_pair("KwangHyun", 3.55));

    // 다른 방법 , key가 된다
    pitcherList["DongRyul"] = 3.45;
    pitcherList["DongWon"] = 1.67;
    pitcherList["ChooChoo"] = 2.51;

    PrintMapElement(pitcherList);

    // 배열처럼
    cout << "Chanho's ERA : " << pitcherList["Chanho"] << endl;

    pitcherList["Chanho"] = 8.51;
    cout << "Chanho's ERA : " << pitcherList["ChooChoo"] << endl;

}