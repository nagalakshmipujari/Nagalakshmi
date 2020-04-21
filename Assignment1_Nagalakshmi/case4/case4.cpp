/*program about Access Specifiers.
filename:case4.cpp
author:Nagalakshmi.P
date:10-4-2020*/
#include <iostream>
#include <string.h>
using namespace std;
class base //single base class
{
        public:
        int ivar1;
        void getdata()
        {
                cout << "Enter value of variable1 is: ";
                cin >> ivar1;
        }
};
class derived1 : public base // derived class from base class
{
        public:
        int ivar2;
        void readdata()
        {
                cout << "\nEnter value of variable2 is: ";
                cin >> ivar2;
        }
};
class derived2 : public derived1   // derived from class derived1
{
        private:
        int ivar3;
        public:
        void indata()
        {
                cout << "\nEnter value of variable3 is: ";
                cin >> ivar3;
        }
        void product()
        {
            cout << "\nProduct= " << ivar1 * ivar2 * ivar3;
        }
};

int main(int argc, char* argv[])
{
        // condition for arguments to dispaly -h file
    if ((argc == 2)&&(strcmp(argv[1],"-h")==0))
    {
        cout << "\\usage of program:\\" << endl << "about access specifiers  " << endl;
        cout << " displays about public,private and protected access specifiers"<< endl ;
    }

    else
    {
        derived2 a;      //object of derived class
        a.getdata();
        a.readdata();
        a.indata();
        a.product();
        return 0;
        }
}
