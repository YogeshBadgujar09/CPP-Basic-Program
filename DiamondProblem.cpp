#include<iostream>

using namespace std;

class A{
	
	public :
		
	void funA()
	{
		cout << "Function A";
	}
};


class B : public A{
	
	public :
	void funB()
	{
		cout << "Function B";
	}
};

class C : public A{
	
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
	D d ;
	d.funA();
	
	return 0;
}