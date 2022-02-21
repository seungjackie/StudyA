#include <iostream>

using namespace std;

namespace BestComImpl
{
    void SimpleFunc(void);
}

namespace ProgComImpl
{
    void SimpleFunc(void);
}

int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
}

void BestComImpl::SimpleFunc(void)
{
    cout << "BestComimpl " << endl;
}

void ProgComImpl::SimpleFunc(void)
{
    cout << "ProgComimpl : " << endl;
}