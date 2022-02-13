#include <iostream>
#include <vector>

template <typename T>
void PrintVector(std::vector<T>& vc)
{
    //print all vector elements
    std::cout << "[";
    for(typename std::vector<T>::iterator itr = vc.begin(); itr != vc.end(); ++itr)
    {
        std::cout << *itr << " ";
    }
    std::cout << "]\n";
}

int main()
{
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(20);

    std::cout << "first status vector" << std::endl;
    PrintVector(vec);

    std::vector<int>::iterator itr = vec.begin();
    std::vector<int>::iterator endItr = vec.end();

    // 배열로 접근
    for(std::vector<int>::size_type i= 0; i != vec.size(); i++)
    {
        if(vec[i] == 20)
        {
            //처음부터 다시 찾겟다
            vec.erase(vec.begin() + i);
            i--;
        }
    }

    std::cout << "value 2 delete" << std::endl;
    PrintVector(vec);

    return 0;
}
