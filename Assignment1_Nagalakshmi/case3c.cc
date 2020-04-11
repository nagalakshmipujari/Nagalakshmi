#include<iostream>
#include<stdlib.h>
using namespace std;
extern int ig;     //storage class extern variable declaration

/*
function name:storageauto
return type:int
parameters:int ia1,int ia2
*/
int storageauto(int ia1,int ia2)
{
        auto int isum;
        isum=ia1+ia2;
        return isum;
}
/*
function name: storagestatic
return type:void
function that describes the static storage class
*/

static int is=5;   //static variable declaration
void storagestatic()
{
        static int i=0;
        cout<<"static storage::is=\t"<<is--<<endl;
        cout<<"static storage::i=\t"<<i++<<endl;
}

/*
function name: storageregister
return type:void
function that describes the register storage class
*/
void storageregister()
{
        register int roll=35;
        cout<<"Register Variable roll:"<<roll<<endl;
}
/*function name:storageextern
return type:void
function that describe the extern storage classes
*/
void storageextern()
{
        int ig=10;
cout<<"Extern Storage ::ig is"<<ig<<endl; //display the extern variable
}

int main(int argc,char* argv[])
{
        int ii=2,ij=3,ik,ig=7;
        if(argc==2)
        {
        cout<<"usage:: ./a.out"<<endl;
        cout<<"describe the storage classes"<<endl;
        }
else
{
//auto storage fucntion calling
ik=storageauto(ii,ij);
cout<<"Auto storage :: iSum="<<ik<<endl;
//calling all storage classes functions
storageextern();
storageregister();
storagestatic();
cout<<"ig is:"<<ig<<endl;
return 0;
}
}
