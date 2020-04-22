/*Initialize the private variables in a class by using friend function.
filename:case5a.cpp
author:Nagalakshmi.P
date:10-4-2020.*/
#include<iostream>
#include<string.h>
using namespace std;
// base class
class Test
{

        int ivar1 , ivar2, ivar3;
        friend int product(Test);    //declaring the friend function.
        public:
                int display()
                {
                        // private data member 'ivar3' accessed in public
                        ivar3= 30; //In public we are accessing the private data member 'variable3'
                        cout <<"public(variable3):"<< ivar3 ;
                }
};
//To access private data members from friend function
int product(Test ob)
{
        cout<<" enter the values of variable1 and variable2:";
        cin>> ob.ivar1 >> ob.ivar2;
        cout<<"the product of variable1 and variable2 is = "<<ob.ivar1 * ob.ivar2 << endl;
}
int main(int argc, char* argv[])
{
        // condition for arguments to dispaly -h file
        if ((argc == 2)&&(strcmp(argv[1],"-h")==0))
        {
                cout <<"usage of program:"<<endl<<"Acessing the private data members"<< endl;
                cout << " using friend function and public member function"<< endl;
        }
        else
        {
                Test ob;
                product(ob);
                ob.display();

        }
return 0;
}

