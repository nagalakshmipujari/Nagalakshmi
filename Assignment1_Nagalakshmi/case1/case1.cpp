/*parse the give command line and display in the given format.
file name:case1.cc
date:10-4-2020
author:Nagalakshmi */
#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
bool Size(string str)
{
        int ivar;
        for(ivar=0;str.length()==1;ivar++)
        {
                return true;
        }
}
int main(int argc,char *argv[])
{
        if((argc==2)&&(strcmp(argv[1],"-h")==0))  //checking the arguments to display -h
        {
                cout << " parse.exe" << endl<<argv[0];
                cout << " enter values in command line" << endl<<"check for the output"<<endl;
        }
        else
        {
                int ivar1;
                int ivar2;
                float fvar3;
                for(ivar1=1;ivar1<argc;ivar1++)    //looping for arguments
                {
                        ivar2=atoi(argv[ivar1]);  // converting from ascii to int
                        fvar3=atof(argv[ivar1]);   //converting from ascii to float
                        if(ivar2==0)
                        {
                                if(Size(argv[ivar1]))
                                {
                                        cout<<"char";
                                        cout<<"\t"<<argv[ivar1]<< "\t"<<strlen(argv[ivar1])<<endl;
                                }
                                else
                                {
                                        cout<<"string";
                                        cout<<"\t"<<argv[ivar1]<< "\t"<<strlen(argv[ivar1])<<endl;    }
                        }
                        else
                        {
                                if(ivar2==fvar3)
                                {
                                        cout<<"int"<< "\t"<<ivar2<<"\t"<<sizeof(ivar2)<<endl;
                                }
                                else
                                {
                                        cout<<"float"<< "\t"<<fvar3<<"\t"<<sizeof(fvar3)<<endl;
                                }
                                }
                }
return 0;
}
}

