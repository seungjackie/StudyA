#include <iostream>
#include <string>

using namespace std;

class CCar 
{
    public :
        CCar() {};  
        CCar (string brand, string name, int year)
        {
            m_strBrand = brand;
            m_strName = name;
            m_nYear = year;
        }
        string m_strBrand;
        string m_strName;
        int m_nYear;
};

CCar::CCar()
{
    
}

int main()
{
    CCar bmwCar("BMW", "XS", 2002);
    CCar audiCar("Audi", "AB", 2012);

    cout << bmwCar.m_strBrand << " : " << bmwCar.m_strName <<  ", " << bmwCar.m_nYear << endl;
    cout << audiCar.m_strBrand << " : " << audiCar.m_strName << ", " << audiCar.m_nYear << endl;
}