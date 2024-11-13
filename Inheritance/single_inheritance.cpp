#include<iostream>

using namespace std;

class Parent
{
    protected:
    int a,b;
    public:
    Parent()
    {
        a = 10;
        b = 25;
        cout<<"parent constructor"<<endl;
    }
    ~Parent()
    {
        cout<<"parent destructor"<<endl;
    }
    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
};

class child : public Parent
{
    public:
    child()
    {
        cout<<"child constructor"<<endl;
    }
    ~child()
    {
        cout<<"child destructor"<<endl;
    }
    void modify()
    {
        a =20,b= 50;
    }
    void sum()
    {
        cout<<"a +b = "<<a+b<<endl;
    }
};

int main()
{
    child c;
    c.display();
    c.modify();
    c.display();
    c.sum();
}



