#include<iostream>

using namespace std;

class test
{
    int a;
    public:
    test(int x)
    {
        a = x;
        cout<<"Constructor"<<endl;
    }
    ~test()
    {
        cout<<"Destructor"<<endl;
    }
    void print()
    {
        cout<<"a = "<<a<<endl;
    }
};

void func()
{
    static test t(10);
    t.print();
}

int main()
{
    int i = 0;
    if(i == 0)
        func();

    return 0;

}

//without using static keyword,object will be created multiple times when we call the function
//using static object will be created only ones.