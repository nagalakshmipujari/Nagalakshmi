#include<iostream>
using namespace std;

// global variable
int i_G = 12;

// variable accessed from
void display()
{
        cout<<i_G<<endl;
}

// main function
int main(int argc,char* argv[])
{
        if(argc==2)
        {
                cout<<"usage of the program "<<endl<<" variable scope"<<endl;
                cout<<" local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable  "<<endl;
        }

else
{
        // prints the variable iGlobal
        display();

        // changing value of Global variable  by assigning value locally
        // local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable
        i_G = 30;
        display();
}

}
