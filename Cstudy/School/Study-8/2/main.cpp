#include <iostream>
#include "Rectangle.hpp"
#include "Triangle.hpp"

int main()
{
    CShape* shape;
    CRectangle rect(20, 30);
    CTriangle tri(10, 30);

    //stroe the address of rectangle
    shape= &rect;

    // call rectangle area
    shape= &tri;

    //store the address
    shape->Area();

}