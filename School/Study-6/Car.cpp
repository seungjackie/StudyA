#include "Car.hpp"

void CCar::PrintCarInformation()
{
    cout << "Car Company Name : " << m_strCompany << endl;
    cout << "Car Name : " << m_strCarName << endl;
    cout << "Car No : " << m_strCarNo << endl;
}

int CCar::CarSpeed(int maxSpeed) // 0127
{
    return maxSpeed;
}