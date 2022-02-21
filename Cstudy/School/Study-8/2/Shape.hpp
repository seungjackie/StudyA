#pragma once
#include <iostream>

using namespace std;
class CShape
{
protected:
    int m_nWidth, m_nHeight;

public:
    CShape() {}; //default constructor
    CShape(int nWidth,int nHeight);
    //가상 함수 cshape 를 상속 받은 
    //반드시 구현 부분이 있어야 한다
    virtual int Area() = 0;
    

};