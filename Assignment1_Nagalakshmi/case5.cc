#include<iostream>
using namespace std;
// base class
class Test
{

        int ix , iy, iz ;
    friend int product(Test);    //declaring the friend function.

        public:
                int display()
                        {
                                // private data member 'iz' accessed in public
                                iz= 30 ; //In public we are accessing the private dta member 'z'
                                cout <<"public(z):"<< iz ;
                        }


};
//To access private data members from friend function
int product(Test ob)
{
        cout<<" enter the values of x and y:" ;
        cin>> ob.ix >> ob.iy ;
    cout<<"the product of x and y is = "<<ob.ix * ob.iy << endl ;
}
int main(int argc, char* argv[])
{
        // condition for arguments to dispaly -h file
    if (argc == 2)
    {
        cout << "\\usage of program:\\" << endl << " Acessing the private data members " << endl;
        cout << " using friend fun and public mem function"<< endl ;
    }

    else
    {

        Test ob;
        product(ob);
        ob.display();

        }
}

