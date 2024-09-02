#include<iostream>

using namespace std;
 

class MultiStudentInfo{

    private :

       int rollNo;
       string sname;
       float sfees;

     

    public :

        void setStudentInfo()
        {
            cout << "Enter Roll No :" ;
            cin >> rollNo ;

            cout<<"Enter sname :";
            cin >> sname;

            cout << "Enter fees";
            cin >> sfees;
        }

        void getStudentInfo()
        {
            cout << " Information { Roll No : " << rollNo << ", Student Name : " << sname << ", fees :" << sfees <<"}" ;
        }


};

int main()
{
    
  MultiStudentInfo obj[10];
  
  for (int i = 0; i < 10 ; i++)
  {
    obj[i].setStudentInfo();
  }
  
    
  for (int i = 0; i < 10 ; i++)
  {
    obj[i].getStudentInfo();
  }
    

    return 0;
}

