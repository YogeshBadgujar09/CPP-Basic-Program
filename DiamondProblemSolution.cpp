#include<iostream>

using namespace std;

class A{
	
	public :
	void funA()
	{
		cout << "Function A";
	}
};


class B : virtual public A{
	
	public :
	void funB()
	{
		cout << "Function B";
	}
};

class C : virtual public A{
	
	public :
	void funC()
	{
		cout << "Function C";
	}
};

class D : public C , public B{	
	public :
	void funD()
	{
		cout << "Function D";
	}
	
};

int main()
{	
	A *a;
	
	D d ;
	
	a = &d;
	
	a->funA();
	
	return 0;
}