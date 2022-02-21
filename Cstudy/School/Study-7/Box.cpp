#include "Box.hpp"

double CBox::GetVolume(void)
{
    return m_length *m_breadth *m_height;
}

void CBox::SetLength(double length)
{
    m_length = length;
}

void CBox::SetBreadth(double breadth)
{
    m_breadth = breadth;
}

void CBox::SetHeight(double height)
{
    m_height = height;
}

// 띄어쓰기 주의
CBox CBox::operator+(const CBox& b)
{
    // 왼쪽 박스 1 자기꺼다
    CBox box;
    box.m_length = this->m_length + b.m_length;
    box.m_breadth = this->m_breadth + b.m_breadth;
    box.m_height = this ->m_height + b.m_height;

    return box;
}