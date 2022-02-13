#include  <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <stdexcept>

using namespace std;

template <class T>
class CStack
{
private:
    vector<T> elements;

public:
    void push(T const&); // push element
    void pop();         // pop element
    T top() const;      // return top element //함수 변경 불가

    // vector empty check function
    bool empty() const {
        return elements.empty();
    }

};

int main()
{
    try
    {
        // 변수 들여쓰기
        CStack<int>     nStack;     // integer stack
        CStack<string>  strStack;   // string stack

        // manipulate integer stack
        nStack.push(25);
        cout << "nStack top element : " << nStack.top() << endl;

        //manipulate string stack
        strStack.push("Hello Stack");
        strStack.push("Hello c++");
        strStack.push("Hello world");
        strStack.pop(); 

        //push 는 바닥부터 깔리고
        //pop이 맨 꼭대기 부터 빼주는거고 

        cout << "strStack top element : " << strStack.top() << endl;



        // error
        strStack.pop();
        cout << "strStack top element : " << strStack.top() << endl;
        // strStack.pop();
    }
    catch(const std::exception& ex)
    {
        cerr << "Exception : " << ex.what() << endl;
        return -1;
    }
    
}

template <class T>
void CStack<T>::push(T const& elem)
{
    elements.push_back(elem);
}

template <class T>
void CStack<T>::pop()
{
    // 내장함수
    if(elements.empty())
    {
        //top 할게 업다 에러
        throw out_of_range("CStack<>::pop() : empty stack"); 
    }

    //remove last(top) element , 맨 꼭대기
    elements.pop_back();
}

template <class T>
T CStack<T>::top() const
{
    if(elements.empty())
    {
        //top 할게 업다 에러
        throw out_of_range("CStack<>::pop() : empty stack"); 
    }

    //return copy of last(top) element
    return elements.back();
}