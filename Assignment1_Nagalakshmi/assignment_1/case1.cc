/*parse the give command line and display in the given format.
file name:case1.cc
date:10-4-2020
author:Nagalakshmi */
#include<iostream>
#include<typeinfo>
#include<string.h>
#include<stdlib.h>

using namespace std;
bool Size(string s)
{
        int i_k;
        for(i_k=0;s.length()==1;i_k++)
        {
                return true;
        }
}
int main(int argc,char *argv[])
{
        int i_x;
        int i_y;
        float f_z;

        if (argc==2)  //checking the arguments to display -h
                {
                        cout << " parse.exe" << endl;
                        cout << " enter values in command line" << endl<<"check for the output"<<endl;

                }
                else
                {

                        for(i_x=1;i_x<argc;i_x++)    //looping for arguments
                        {
                                i_y=atoi(argv[i_x]);  // converting from string to int
                                f_z=atof(argv[i_x]);   //converting from string to float

                                if(i_y==0)
                                {
                                        if(Size(argv[i_x]))
                                        {
                                                cout<<"char";
                                                cout<<"\t"<<argv[i_x]<< "\t"<<strlen(argv[i_x])<<endl;

                                        }
                                        else
                                        {
                                                cout<<"string";
                                                cout<<"\t"<<argv[i_x]<< "\t"<<strlen(argv[i_x])<<endl;
                                        }
                                        }
                                        else
                                        {
                                                if(i_y==f_z)
                                                cout<<"int"<< "\t"<<i_y<<"\t"<<sizeof(i_y)<<endl;
                                                else
                                                cout<<"float"<< "\t"<<f_z<<"\t"<<sizeof(f_z)<<endl;
                                        }
                                        }
                                        return 0;
                                }
}
