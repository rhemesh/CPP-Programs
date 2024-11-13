#include<iostream>

using namespace std;

class A
{
    public:
    virtual void display()
    {
        cout<<"Inside class A"<<endl;
    }
};
class B : public A
{
    public:
    void display()
    {
        cout<<"Inside class B"<<endl;
    }
};

class C : public B
{
    public:
    void display()
    {
        cout<<"Inside class c"<<endl;
    }
};
int main()
{
    A *ptr;
    C c;
    ptr = &c;
    ptr->display(); //without using virtual it calls class A ,with virtual in class A it calls class C
    c.display();
}