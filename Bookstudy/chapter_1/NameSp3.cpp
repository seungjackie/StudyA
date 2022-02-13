#include <iostream>

using namespace std;


namespace BestComImpl
{
    void SimpleFunc(void);
}

namespace BestComImpl
{
    void PrettyFunc(void);
}

namespace ProgComImpl
{
    void SimpleFunc(void);
}


int main(void)
{
    //심플함수만 적용
    BestComImpl::SimpleFunc();
}


void BestComImpl::SimpleFunc(void)
{
    cout << "BestComimpl " << endl;
    PrettyFunc();               //같은 공간 space
    ProgComImpl::SimpleFunc();  //다른 nmaespace
}

void BestComImpl::PrettyFunc(void)
{
    cout << "So Pretty !! " << endl;
}

void ProgComImpl::SimpleFunc(void)
{
    cout << "Program compile " << endl;
}