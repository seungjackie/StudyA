// #include "Book.hpp"

// CBook::CBook()
// {
//     // 
// }

// CBook::CBook(const string& strTitle, int nTotalPage)
// {
//     m_strTitle = strTitle;
//     m_nTotalPage = nTotalPage;
//     m_nCurrentPage = 0;
//     SetPercent();
// }

// // 범위 지정 연산자
// void CBook::SetPercent()
// {
//     m_fPercent = (double)m_nCurrentPage / m_nTotalPage * 100;
// }

// const CBook &CBook::ThickerBook(const CBook &compBook)
// {
//     //주소
//     if (compBook.m_nTotalPage > this->m_nTotalPage)
//     {
//         return compBook;
//     }

//     else
//     {
//         return* this;
//     }
// }

#include "Book.hpp"

CBook::CBook()
{
    //
}

CBook::CBook(const string &strTitle, int nTotalPage)
{
    m_strTitle = strTitle;
    m_nTotalPage = nTotalPage;
    m_nCurrentPage = 0;
    SetPercent();
}

void CBook::SetPercent()
{
    m_fPercent = (double)m_nCurrentPage / m_nTotalPage * 100; // 형변환 Type casting
}

const CBook &CBook::ThickerBook(const CBook &compBook)
{
    if (compBook.m_nTotalPage > this->m_nTotalPage)
    {
        return compBook;
    }
    else
    {
        return *this;
    }
}