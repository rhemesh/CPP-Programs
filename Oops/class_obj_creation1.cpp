#include<iostream>

using namespace std;

class Base
{
    int a,b;
    public:
    void func_to_initialize_a()
    {
        a = 10;
        cout<<"a = "<<a<<endl;
    }
    void func_to_initialize_b()
    {
        b =100;
        cout<<"b = "<<b<<endl;
    }
};

int main()
{
    Base  b1,b2;
    b1.func_to_initialize_a();
    b1.func_to_initialize_b();
    b2.func_to_initialize_a();
    b2.func_to_initialize_b();

    return 0;

}

//Initializing a and b value in functions and eg to create multiple objects for a single class