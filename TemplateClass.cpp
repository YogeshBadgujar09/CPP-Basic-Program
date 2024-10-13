#include <iostream>
using namespace std;
template<class T1, class T2>

class Adder
{
    private:
        T1 x;
        T2 y;
 
    public:
        
        Adder(T1 x, T2 y)
        {
            this->x = x;
            this->y = y;
        }
        
        void add()
        {  
            cout<<"Sum is: "<<(x+y)<<endl;
        }
 };
 
 int main()
 {
    Adder<int,int> a1(3, 5);
    a1.add();
    
    Adder<int,double> a2(2, 5.3);
    a2.add();
    
    return 0;   
  }