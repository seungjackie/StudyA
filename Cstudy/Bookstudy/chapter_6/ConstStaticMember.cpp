#include <iostream>
using namespace std;

class CountryArea
{
public:
    const static int Russia         =1707540;
    const static int Canada        =998467;
    const static int China          =957290;
    const static int South_Korea    =9922;
};

int main(void)
{
    cout << "Country russia : " << CountryArea::Russia << " A" << endl;
    cout << "Country Cananda : " << CountryArea::Canada << " B" << endl;
    cout << "Country China  : " << CountryArea::China << " C" << endl;
    cout << "Country South_Korea : " << CountryArea::South_Korea << " D" << endl;
}