#include <iostream>
#include <memory> //Smart pointer

using namespace std;

class CPerson{
private:
    string strName;
    int nAge;
public:
    CPerson(const string& name, int age);
    ~CPerson() { cout << "Object Destructor" << endl;}
    void ShowPersonInfo();
};

int main() 
{
    // unique_ptr<CPerson> ptrPerson = make_unique<CPerson>("James Hetfield" , 59);
    shared_ptr<CPerson> ptrPerson = make_shared<CPerson>("James Hetfield" , 59);
    cout << "Currently Own Count : " << ptrPerson.use_count() << endl;
    auto james = ptrPerson;
    //소유권 자만 실행 할수 있다
    ptrPerson->ShowPersonInfo();
    cout << "Currently Own Count : " << ptrPerson.use_count() << endl;
    ptrPerson->ShowPersonInfo();
    james.reset();
    cout << "Currently Own Count : " << ptrPerson.use_count() << endl;

    return 0;
}

CPerson ::CPerson(const string& name, int age)
{
    strName = name;
    nAge = age;
    cout << "Objet constructor!!" <<endl;
};

void CPerson::ShowPersonInfo()
{
    cout << strName << "'s name : " << endl;
};