#include<iostream>

using namespace std;

class Base
{
    int a;
    double b;
    public:
    Base()
    {
        cout<<"Default constructor"<<endl;
    }
    Base(int x,int y)
    {
        a = x;
        b = y;
        cout<<"Constructor Invoked"<<endl;
    }
    Base(int x,double y)
    {
        a = x;
        b = y;
        cout<<"Constructor Invoked"<<endl;
    }
    void display()
    {
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }

};

int main()
{
    Base b1(2,3);
    b1.display();
    Base b2(23,34.34);
    b2.display();
    Base b3;

    return 0;

}

//This is an constructor overloading acts same as function overloading ie having same constructor name wit different argiments differed by type,num of ,and order.