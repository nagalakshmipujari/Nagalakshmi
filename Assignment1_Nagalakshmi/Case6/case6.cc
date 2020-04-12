/*Program: using int*, char [].
filename:case6.cc
date:11-04-2020
Author:Nagalakshmi
*/

#include<iostream>
using namespace std ;
//Base class
class test
{
        // private members
        int inum ;
        int *iptr;
        int iop ;
        char cstr[20] ;

        public:
                // public members
                // default constructor
                test()
                {
                        cout<<"enter integer for overloading :"<< endl ;
                        cin >> iop ;

                }
                // destructor
                ~test()
                {
                        cout<<"Destructor called" << endl ;
                }
                // operator overloading

                 void operator --(int)
                {
                        iop--;
                }
                // read function to read inputs
                int read ()
                {
                        iptr= &inum ;
                        cout<< "enter integer " << endl  ;
                        cin >> inum ;

                        cout<<"enter char:"<< endl ;
                        cin >> cstr ;
                }
                // display function to display outputs

                int display()
                {
                        cout<< "character:" << cstr <<endl ;
                        cout<< "Adress of inum:"<< iptr << endl ;
                        cout<< "Data at *iptr:"<< *iptr << endl ;
                        cout<< "Data at inum:"<< inum << endl ;
                        cout<< "After decrement:"<< iop << endl ;
                }

} ;

int main(int argc, char* argv[])
{
        // condition for arguments to dispaly -h file
    if (argc == 2)
    {
        cout << "\\usage of the program:\\" << endl ;
                cout << "using int* , char[] as private member variables " << endl ;


    }

    else
    {
    // object creation
        test ob ;
        // object for opperator overloading
        ob-- ;
        //functions calling
        ob.read() ;
        ob.display() ;
        }
}

