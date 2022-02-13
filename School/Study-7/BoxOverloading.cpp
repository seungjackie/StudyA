#include <iostream>
#include "Box.hpp"

using namespace std;

int main()
{
    CBox box1;
    CBox box2;
    CBox box3;
    double voulume = 0.0f;

    box1.SetLength(6.5);
    box1.SetBreadth(7.0);
    box1.SetHeight(5.0);

    box2.SetLength(12.5);
    box2.SetBreadth(13.0);
    box2.SetHeight(10.25);

    voulume = box1.GetVolume();
    cout << "voulume of box1 : " << voulume << endl;

    voulume = box1.GetVolume();
    cout << "voulume of box2 : " << voulume << endl;

    //적절한 타입을 불러다 쓴다
    //더해줄 박스 box1 + box2 더 해줄 오브젝트
    box3 = box1 +box2 ;
    voulume = box3.GetVolume();
    cout << "voulume of box2 : " << voulume << endl;

    return 0;
}