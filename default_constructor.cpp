#include<iostream>

using namespace std;

class test 
{
    int a,b;
    public:
    test()
    {
        a =22,b=23;
    }
    void print()
    {
        cout<<"Value of a  = "<<a<<endl;
        cout<<"Value of b  = "<<b<<endl;
    }
};

int main()
{
    test t1,t2;
    t1.print();
    t2.print();
    
    return 0;

}

//constructor is called automatically whenever we create an object for the class