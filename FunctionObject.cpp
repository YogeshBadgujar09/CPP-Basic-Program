#include<iostream>
#include<vector>

using namespace std;

class FunctionObject
{
	public :
		
		int operator()(int a, int b)
		{
			return a+b;
		}
};

int main()
{
	 FunctionObject obj1 ;
	 
	 int result = obj1(10,20);
	 
	 cout << "Result :" << result ;
	
	return 0;
} 
