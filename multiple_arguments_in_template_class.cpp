#include<iostream>

using namespace std;

template<class x,class y>
class test
{
    x a = 0;
    y b = 1;
    public:
    test()
    {
        cout<<"Constructor Invoked"<<endl;
    }
    ~test()
    {
        cout<<"Destructor Invoked"<<endl;
    }
    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
};

int main()
{
    test<int,double> t;
    t.display();
}