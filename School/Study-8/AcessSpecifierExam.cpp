#include <iostream>

using namespace std;

class CBox
{
    protected:
        double m_width;

};

class CSmallBox:public CBox
{
    //퍼블릭 안에 함수로 접근
    public:
        void SetSmallWidth(double width);
        double GetSmallWidth();

};

void CSmallBox::SetSmallWidth(double width)
{
    m_width = width;
};

double CSmallBox::GetSmallWidth()
{
    return m_width;
}

int main()
{
    CSmallBox* smallBox = new CSmallBox();

    //연산자 접슨
    smallBox->SetSmallWidth(5.0);
    cout << "Width of small box : " << smallBox->GetSmallWidth() << endl;

    // 다 쓰면 지운다
    delete smallBox;
}