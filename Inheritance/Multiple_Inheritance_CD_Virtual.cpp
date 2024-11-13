#include<iostream>

using namespace std;

class par1
{
    public:
    par1()
    {
        cout<<"par1 constructor"<<endl;
    }
    ~par1()
    {
        cout<<"par1 destructor"<<endl;
    }
};
class par2
{
    public:
    par2()
    {
        cout<<"par2 constructor"<<endl;
    }
    ~par2()
    {
        cout<<"par2 destructor"<<endl;
    }
};
class par3
{
    public:
    par3()
    {
        cout<<"par3 constructor"<<endl;
    }
    ~par3()
    {
        cout<<"par3 destructor"<<endl;
    }
};

class child : public par1, public par2,virtual public par3
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
};

int main()
{
    child c;
}

//whenever we use virtual keyword that class will be called first
