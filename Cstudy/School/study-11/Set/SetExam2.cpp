
#include <iostream>
#include <string>
#include <set>

using namespace std;

template <typename T, typename C>
void PrintSet(set<T, C>& s)
{
   cout << "[";
   for (const auto& ele : s) {
      cout << ele << " ";
   }
   cout << "]\n";
}

class Todo
{
private:
   int priority;
   string jobDesc;

public:
   Todo(int nPriority, string strJobDesc)   // 초기화
      : priority(nPriority),
      jobDesc(strJobDesc)
   {
   }



   friend class TodoCmp;

   friend ostream& operator<<(ostream& o, const Todo& td);  // friend 함수는 접근 제한자를 생략해준다
};

class TodoCmp
{
public:
    bool operator()(const Todo& t1, const Todo& t2) const
    {
        if (t1.priority == t2.priority)
        {
            return (t1.jobDesc < t2.jobDesc);
        }
        return t1.priority > t2.priority;
    }
};

ostream& operator<<(ostream& o, const Todo& td)  
{
   o << "[Priority : " << td.priority << "] : " << td.jobDesc << endl;
   return o;
}

int main()
{
   set<Todo, TodoCmp> todos;
   
   todos.insert(Todo(1, "Delivery work"));
   todos.insert(Todo(3, "Wake up early in the morning"));
   todos.insert(Todo(2, "Exercise for 1 hour every day"));
   todos.insert(Todo(4, "Study Maths/Algorithms/Computer Science"));
   todos.insert(Todo(5, "Meet friends"));

   PrintSet(todos);

   cout << "=========================================" << endl;
   cout << "if you complete exercise math" << endl;
   todos.erase(todos.find(Todo(2, "Exercise for 1 hour every day")));
   cout << endl;

   PrintSet(todos);
   return 0;
}