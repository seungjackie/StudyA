#include "Shape.hpp"

class CRectangle:
    public CShape
{
public:
    // other reset
    CRectangle(int nWidth =0, int nHeight = 0):CShape(nWidth, nHeight) {};
    int Area();
};