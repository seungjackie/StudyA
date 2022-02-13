#include <iostream>

using namespace std;

namespace BestComImpl
{
    void SimpleFunc(void)
    {
        cout << "BestComImpl" << endl;
    }
}

namespace ProgComImpl
{
    void SimpleFunc(void)
    {
        cout << " ProgComImpl" << endl;
    }
}

int main()
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}