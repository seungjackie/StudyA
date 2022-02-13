#include <iostream>
using namespace std;

class SinivelCap
{
public:
    void Take() const {cout << " take1 . " << endl;}
};

class SneezeCap
{
public:
    void Take() const{cout << " take2 . " << endl;}
};

class SnuffleCap
{
public:
    void Take() const{cout << " take3 . " << endl;}
};

class CONTACT600
{
private:
    SinivelCap sin;
    SneezeCap sne;
    SnuffleCap snu;

public:
    void Take() const
    {
        sin.Take();
        sne.Take();
        snu.Take();
    }
};

class ColdPatient
{
public:
    void TakeCONTACT600(const CONTACT600 &cap) const{cap.Take();}
};

int main(void)
{
    CONTACT600 cap;
    ColdPatient sufferer;
    sufferer.TakeCONTACT600(cap);
    return 0;
}