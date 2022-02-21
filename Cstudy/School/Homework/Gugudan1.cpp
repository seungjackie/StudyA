#include <iostream>
#include <stdio.h>


using namespace std;

int main()
{
	int t = 0;
	for (int i = 1; i < 10; i++)
	{
        cout << i << "단" << "\t" ;
		for (int a = 1; a < 10; a++)
		{
			t = i*a;
            cout << i << "x" << a << " = " << t << " " ;
		}
		cout << endl;
	}

    cout << "================================="<<endl;

    int q = 0;
	for (int w = 1; w < 10; w++)
	{
		for (int e = 1; e < 10; e++)
		{
			q = w*e;
			cout << w << "x"<< e << "=" << q<<'\n';
		}
		cout << endl;
	}
}