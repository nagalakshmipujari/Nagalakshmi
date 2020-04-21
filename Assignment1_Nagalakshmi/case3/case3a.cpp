/*program about variable scope.
file name:case3a.cpp
author:Nagalakshmi.P
date:10-04-2020*/
#include<iostream>
#include<string.h>
using namespace std;

// global variable
int ig_int = 12;

// variable accessed from
void display()
{
        cout<<ig_int<<endl;
}

// main function
int main(int argc,char* argv[])
{
        if((argc==2)&&(strcmp(argv[1],"-h")==0))
        {
                cout<<"usage of the program "<<endl<<" variable scope"<<endl<<argv[0];
                cout<<" local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable  "<<endl;
        }

else
{
        // prints the variable iGlobal
        display();

        // local variable
        int il_int = 20;

        cout<<il_int<<endl;
}
}

