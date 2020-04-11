#include <iostream>
using namespace std;

// main function
int main(int argc,char* argv[])
{
        if(argc==2)//Display the usage of program.
        {
                cout<<"usage of the program "<<endl<<"modifier type"<<endl;
                cout<<" Inputs are given for different modifier types "<<endl;
        }

else
{
  short int i;
  long int j;
  unsigned short k;
  signed short l;

  cout << "enter value: ";
  cin>>j;
  i=k=l=j;    //value of i, j, k and l is assigned same

  //Display the outputs
  cout << " short int i = " << i << endl;
  cout << " long int j = " << j << endl;
  cout << " unsigned short k = " << k << endl;
  cout << " signed short l = " << l << endl;

  return 0;
}
}
