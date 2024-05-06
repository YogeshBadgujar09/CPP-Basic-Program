#include<iostream>

using namespace std;

class A
{
	private :
		
		int a;
		int b;
	
	public :
		A(int a, int b)
		{
			this->a = a;
			this->b = b;
		}
		
		void print()
		{
			cout << a << " " << b ;
		}
		
};
int main()
{
	A a(10,20);
	a.print();
	return 0;
}