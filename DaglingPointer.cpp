#include<iostream>

using namespace std ;

class S1
{
	private :
		int a ;
		int b ;
		
	public  :
	void  function(){
		cout << "Dagling Pointer" ;
	}
};

int main()
{
	S1 s1 ;
	s1.function();
	
	S1 *s2;
	s2 = &s1 ;
	
      
	s1.delete();
		
	
	return 0;
}