#pragma once
class CBox
{
    public:
        //객체생성자
        CBox() {
            // 초기값
            m_length = 0.0f;
            m_breadth = 0.0f;
            m_height = 0.0f;
        };
        ~CBox() {};

        double GetVolume(void);
        void SetLength(double len);
        void SetBreadth(double bre);
        void SetHeight(double height);
        //return 형
        CBox operator+(const CBox&);

    private:
        double m_length;
        double m_breadth;
        double m_height;

};