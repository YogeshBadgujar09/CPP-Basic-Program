#include<iostream>

using namespace std;

int main()
{
	int n = 5;
	int a = 1;
	
	
	for(int i=1;i<=n;i++)
	{
		a *= i;	
	}	
	
	cout << a;
	
	return 0;
}