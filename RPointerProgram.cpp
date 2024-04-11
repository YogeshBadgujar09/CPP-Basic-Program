#include<iostream>

using namespace std;

int main()
{
	int n = 5;
	int *a;
	
	
	for(int i=1;i<=n;i++)
	{
		a = &i;	
		cout << a;
		
		cout << endl;
	}	
	
	cout << a;
	
	return 0;
}