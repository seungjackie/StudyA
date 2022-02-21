#include <iostream>
#include "Book.hpp"

using namespace std;

int main()
{
    CBook web_book("HTml +CSS", 350);
    CBook html_book("Learing HTml 21 day ", 200);

    cout << web_book.ThickerBook(html_book).m_strTitle << endl;
}