#include<iostream>
using namespace std;

class test
{
public:
    test()
    {
        cout<< "Constructor called" <<endl;
        func() ;
    }

    ~test()
    {
        cout<< "Base class destructor" <<endl;
    }

    virtual void func()
    {
        cout<< "Virtual function" <<endl;
    }

    void func1()
    {
        func();
    }
};

class derived : public test
{
public:
        derived()
        {
            cout<< "Derived class Constructor" <<endl;
        }
        void func()
        {
            cout<< "Derived class Virtual function" <<endl;
        }
                virtual ~derived()
        {
                cout<< "Derived class destructor" << endl ;
        }
};

int main(int argc, char* argv[])
{
        // condition for arguments to dispaly -h file
    if (argc == 2)
    {
        cout << "\\usage of program:\\" << endl << " constructor and destructor  " << endl;
        cout << " Display the derived class of constructor,destructor and virtual function"<< endl ;
    }

    else
    {


    derived d;
    d.func();
}

}

