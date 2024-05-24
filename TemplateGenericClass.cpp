#include<iostream>

using namespace std;

template <class T1 , class T2>

class A
{
	private :
		T1 a ;
		T2 b ;
	public :
		A(T1 a , T2 b)
		{
			this->a = a ;
			this->b = b ;	
		}       
		
		void show()
		{
			cout << a << " " << b ;
		}
				
};      


int main()
{
	A<int,float> a(10,10.20);
	
	 
	a.show();
	
	return 0;
}

