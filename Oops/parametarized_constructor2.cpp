#include<iostream>

using namespace std;

class test
{
    int a,b;
    public:
    test()
    {
        cout<<"default constructor"<<endl;
    }
    test(int x,int y)
    {
        a = x;
        b = y;
        cout<<"Parametarized constructor"<<endl;
    }
    void print()
    {
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }
};

int main()
{
    test t1(2,3);
    t1.print();
    test t2;
    
    return 0;

}