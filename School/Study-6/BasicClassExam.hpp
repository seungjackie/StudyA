
#pragma once
#include <iostream>
#include <string>

    using namespace std;

#pragma pack(push, 1)
// struct BooksInfo{
//     string m_Title;
//     string m_Author;
//     string m_Subject;
//     int m_nBookId;
// };
#pragma pack(pop)

class CBooks
{
public:
    // constructor(객체 생성자)
    CBooks() // 0127
    {
        cout << "CBooks Object Constructor!!!\n";
        m_Title = "Learning javascript 21 days";
        m_Author = "Bla Bla Foo";
        m_Subject = "Javascript web programming";
        m_nBookId = 137361;
    };

    // struct BooksInfo m_BooksInfo;
    string m_Title;
    string m_Author;
    string m_Subject;
    int m_nBookId;

    void PrintBookInformation();
};

void CBooks::PrintBookInformation()
{
    cout << "Book title : " << m_Title << endl;
    cout << "Book Author : " << m_Author << endl;
    cout << "Book Subject : " << m_Subject << endl;
    cout << "Book ID : " << m_nBookId << endl;
}