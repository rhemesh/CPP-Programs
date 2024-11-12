#include<iostream>

using namespace std;

class test
{
    int static x;
    int y;
    public:
    test()
    {
        cout<<"Constructor"<<endl;
    }
    ~test()
    {
        cout<<"Destructor"<<endl;
    }
    static void print()
    {
        cout<<"X = "<<x<<endl;  //Accessing static data variable
        //cout<<"y = "<<y<<endl; //This will produce error because we cannot access non-static variable inside static mf.
    }
};

int test::x = 15;

int main()
{
    test t;
    t.print();
    test::print();  //we can call directly with class name and :: for static mf.

    return 0;

}

//Here,static data variable should initialize it from outside the class.
//static mf cannot access the non-static data members but it can access static data members.
//In normal member function we can access both non-static and static member function