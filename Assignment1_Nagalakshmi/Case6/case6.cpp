/*Program: using int*, char [].
Filename:case6.cc
Date:11-04-2020
Author:Nagalakshmi*/

#include<iostream>
#include<string.h>
using namespace std ;
//Base class
class test
{
        // private members
        int i_Num ;
        int *i_Ptr;
        int i_Op ;
        char c_Str[20] ;

        public:
                // public members
                // default constructor
                test()
                {
                        cout<<"enter integer for overloading :"<< endl ;
                        cin >> i_Op ;

                }
                // destructor
                ~test()
                {
                        cout<<"Destructor called" << endl ;
                }
                // operator overloading

                 void operator --(int)
                {
                        i_Op--;
                }
                // read function to read inputs
                int read ()
                {
                        i_Ptr= &i_Num ;
                        cout<< "enter integer " << endl  ;
                        cin >> i_Num ;

                        cout<<"enter char:"<< endl ;
                        cin >> c_Str ;
                }
                // display function to display outputs

                int display()
                {
                        cout<< "character:" << c_Str <<endl ;
                        cout<< "Adress of inum:"<< i_Ptr << endl ;
                        cout<< "Data at *iptr:"<< *i_Ptr << endl ;
                        cout<< "Data at inum:"<< i_Num << endl ;
                        cout<< "After decrement:"<< i_Op << endl ;
                }

} ;

int main(int argc, char* argv[])
{
        // condition for arguments to dispaly -h file
    if ((argc == 2)&&(strcmp(argv[1],"-h")==0))
    {
        cout << "\\usage of the program:\\" << endl ;
                cout << "using int* , char[] as private member variables " << endl ;

    }

    else
    {
    // object creation
        test ob ;
        // object for operator overloading
        ob-- ;
        //functions calling
        ob.read() ;
        ob.display() ;
        }
}

