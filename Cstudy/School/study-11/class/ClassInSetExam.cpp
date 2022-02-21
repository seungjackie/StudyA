#include <iostream>
#include <set>
#include <string>


//  set이라는 자료구조 '클래스'를 위에서 include해와서 
// >>사용할건데
// 그 자료구조는 <Todo>라고 명명하고 쓸거다.
// 변수는 todos이다
// todos.insert
// 다차원배열할때 변하다고 하는 사람들도 많거든


using namespace std;

template <typename T>
void PrintSetElement(set<T>& s)
{
    for(const auto& ele : s)
    {
        cout << ele << endl;
    }
}

class Todo
{
    // 안쓰면 private
private:
    int priority;
    string jobDesc;

public:
    //초기화 한다?
    Todo(int nPriority, string strJobDesc) 
        : priority(nPriority),
        jobDesc(strJobDesc) 
        {

        }
#if 0
    // 오퍼레이터 내 함수를 바꿀수없다, operator 정의
    bool operator<(const Todo& t) const 
    {
        if(priority == t.priority)
        {
            return jobDesc < t.jobDesc;
        }

        return priority > t.priority;
    }
#endif

    friend class TodoCmp;

    // operator 할때만 쓰자 , 그냥 가져다 쓰는거다
    friend ostream& operator<<(ostream& o, const Todo& td);
};

class TodoCmp
{
    bool operator()(const Todo& t1, const Todo& t2) const
    {
        if(t1.priority == t2.priority)
        {
            return (t1.jobDesc < t2.jobDesc);
        }

        return (t1.priority > t2.priority);
    }
}


// 출력
ostream& operator<<(ostream& o, const Todo& td)
{
    o << "[Priority : " << td.priority << "]" << td.jobDesc;
    return o;
}



int main()
{
    set<Todo> todos;

    // 중요도 순위
    todos.insert(Todo(1, "excersize C++"));
    todos.insert(Todo(2, "excersize math"));
    todos.insert(Todo(1, "Programing Project"));
    todos.insert(Todo(3, "Meet friends"));
    todos.insert(Todo(1, "watching  Tv"));

    // todo를 element를 friends 로 재정의 해서 출력한다
    PrintSetElement(todos);

    cout << "========================================="  << endl;
    cout << "if you complete exercisze math " <<endl;
    todos.erase(todos.find(Todo(2,"excersize math")));
    PrintSetElement(todos);

    return 0;
}