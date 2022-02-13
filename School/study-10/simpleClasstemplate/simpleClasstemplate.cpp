#include <iostream>

using namespace std;

// 모듵 맵에 T를 사용할수 있다
template<typename T>
class CData
{
private:
    T m_data;

public:
    CData(T dt);
    T get_data();
};

int main()
{
    // string
    CData<string> strData("Learing C++");
    CData<int> nData(12);

    cout << "strData : " << strData.get_data() << endl;
    cout << "ndata : " << nData.get_data() << endl;
    return 0;
}

template <typename T>
CData<T>::CData(T dt)
{
    m_data = dt;
}

template <typename T>
T CData<T>::get_data()
{
    return m_data;
}