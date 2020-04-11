#include <iostream>
using namespace std;
class base //single base class
{
        public:
        int x;
        void getdata()
        {
                cout << "Enter value of x= ";
                cin >> x;
        }
};
class derived1 : public base // derived class from base class
{
        public:
        int y;
        void readdata()
        {
                cout << "\nEnter value of y= ";
                cin >> y;
        }
};
class derived2 : public derived1   // derived from class derived1
{
        private:
        int z;
        public:
        void indata()
        {
                cout << "\nEnter value of z= ";
                cin >> z;
        }
        void product()
        {
            cout << "\nProduct= " << x * y * z;
        }
};

int main(int argc, char* argv[])
{
        // condition for arguments to dispaly -h file
    if (argc == 2)
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

