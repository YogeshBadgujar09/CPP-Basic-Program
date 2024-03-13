#include<iostream>

using namespace std;

void User()
{
	static const int a = 10 ;
	
	cout << a ;
}

int main(){
	
	User() ;
	return 0; 
}