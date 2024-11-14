#include<iostream>

using namespace std;

class parent
{
    protected:
    int a;
    public:
    virtual void func() =0;

    void display()
    {
        cout<<"a = "<<a<<endl;
    }
};
class child : public parent
{
    public:
    void func() override
    {
        a = 10;
    }
};

int main()
{
    child c;
    parent *p;
    p = &c;
    p->func();
    p->display();

    return 0;

}