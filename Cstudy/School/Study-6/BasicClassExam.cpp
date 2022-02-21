#include <iostream>
#include <string>
#include "BasicClassExam.hpp"
#include "Car.cpp"

    using namespace std;

// #pragma pack(push, 1)
// struct BooksInfo{
//    string m_Title;
//    string m_Author;
//    string m_Subject;
//    int m_nBookId;
//};
// #pragma pack(pop)

// class CBooks
// {
// public:
//   // struct BasicInfo m_BooksInfo;

//   string m_Title;
//   string m_Author;
//   string m_Subject;
//   int m_nBookId;

//   void PrintBookInformation();
// };

// void CBooks::PrintBookInformation()
// {
//   cout << "Book Title : " << m_Title << endl;
//   cout << "Book Author : " << m_Author << endl;
//   cout << "Book Subject : " << m_Subject << endl;
//   cout << "Book ID : " << m_nBookId << endl;
// }

int main()
{
    CBooks booksObj;
    booksObj.PrintBookInformation(); // 0127

    cout << "======================================" << endl;

    booksObj.m_Title = "Learning C++ 21 days";
    booksObj.m_Author = "SiEun Lee";
    booksObj.m_Subject = "Learning C++ programming";
    booksObj.m_nBookId = 12346;

    booksObj.PrintBookInformation();

    cout << "======================================" << endl;

    CBooks cppBook;
    cppBook.m_Title = "Learning C++ in Hell";
    cppBook.m_Author = "Hades";
    cppBook.m_Subject = "Learning C++ programming in Olympus";
    cppBook.m_nBookId = 666666666;

    cppBook.PrintBookInformation();

    CCar carObj;
    carObj.m_strCompany = "BMW";
    carObj.m_strCarName = "BMW X5";
    carObj.m_strCarNo = "NY 3456";
    carObj.PrintCarInformation();

    cout << carObj.m_strCarName << " Maximum Speed : " << carObj.CarSpeed(220) << endl;
}