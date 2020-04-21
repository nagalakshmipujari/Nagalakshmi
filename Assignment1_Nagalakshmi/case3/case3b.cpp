/*program about modifier type
file name:case3b.cpp
author:Nagalakshmi.P */
#include <iostream>
#include <string.h>
using namespace std;

// main function
int main(int argc,char* argv[])
{
        if((argc==2)&&(strcmp(argv[1],"-h")==0))
        {
                cout<<"usage of the program "<<endl<<"modifier type"<<endl<<argv[0];
                cout<<" Inputs are given for different modifier types "<<endl;
        }

        else
        {
                short int si_int;
                long int li_int;
                unsigned short us_int;
                signed short ss_int;

                cout << "enter value: ";
                cin>>li_int;
                si_int=us_int=ss_int=li_int;  //value of si_int, li_int, us_int and ss_int is assigned same

                //Display the outputs
                cout << " short int si_int = " << si_int << endl;
                cout << " long int li_int = " << li_int << endl;
                cout << " unsigned short us_int = " << us_int << endl;
                cout << " signed short ss_int = " << ss_int << endl;

return 0;
}
}

