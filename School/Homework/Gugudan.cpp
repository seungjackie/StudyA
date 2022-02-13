#include <iostream>

using namespace std;

int main()
{
    int gugudanNum;
    cout << "enter gugudan!! :  ";
    cin >> gugudanNum; cout << endl;
    
    
    while( gugudanNum > 0 && gugudanNum < 10 )  
    {
        for(int i = 1; i <= 9; i++)
        {
            cout << gugudanNum << " * " << i << " = " << gugudanNum*i <<endl;
        }
        cout << "enter gugudan!! : "<< endl;
        
        cin >> gugudanNum; cout << endl;
    }
    return 0;
}