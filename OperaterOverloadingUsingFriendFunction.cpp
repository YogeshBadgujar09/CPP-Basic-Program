#include<iostream>

using namespace std;

class Complex{
	
	int real = 0;
	int img = 0;
	
	
	public :
		Complex()
		{
			
		}
		Complex(int r, int i)
		{
			real = r;
			img = i;
		}
		
		void Display()
		{
			cout << real << "+" << img;
		}
		
		friend Complex operator +(Complex &c1, Complex &c2);
	
};

Complex operator +(Complex &c1, Complex &c2){

	Complex temp;
	
	temp.real = c1.real + c2.real ;
	temp.img = c1.img + c2.img ; 
	return temp ;
}

int main()
{
	Complex C1(10,20);
	Complex C2(40,50);
	
	Complex C3;
	
	C1.Display();
	C2.Display();
	
	C3 = (C1 + C2);
	C3.Display();
	
	return 0;
}