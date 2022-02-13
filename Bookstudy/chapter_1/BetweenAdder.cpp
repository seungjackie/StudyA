#include <iostream>

using namespace std;

int main(void)
{
	int val1, val2;
	int result=0;
	cout<<"사이에 들어갈 숫자 2개: ";
	cin>>val1>>val2;

	if(val1<val2)
	{
		for(int i=val1+1; i<val2; i++)
			result+=i;
	}
	else
	{
		for(int i=val2+1; i<val1; i++)
			result+=i;
	}

	cout<<"사이 숫자: "<<result<<endl;
	return 0;
}