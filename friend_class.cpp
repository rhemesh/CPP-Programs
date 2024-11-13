#include<iostream>

using namespace std;

class A
{
    int a;
    public:
    A()
    {
        a = 10;
        cout<<"Constructor"<<endl;
    }
    ~A()
    {
        cout<<"Destructor"<<endl;
    }
    void shw()
    {
        cout<<"a = "<<a<<endl;
    }

    friend class B;
};

class B
{
    int b;
    public:
    B()
    {
        b = 20;
    }
    void show(A& x)
    {
        x.a = 30;
        cout<<"x.a  = "<<x.a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
int main()
{
    A a;
    B b;
    a.shw();
    b.show(a);
    a.shw();

    return 0;

}

//This acts as pass by reference in friend class because we are passing the obj refrence to the class B function
//Value a changed in class B will reflect in class B
//If we use friend class we can modify the content of the class A variables in class B.