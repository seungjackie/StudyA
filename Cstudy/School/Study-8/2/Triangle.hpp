#include "Shape.hpp"
class CTriangle :
    public CShape
{
public:
    // other reset
    CTriangle(int nWidth =0, int nHeight = 0):CShape(nWidth, nHeight) {};
    int Area();
};