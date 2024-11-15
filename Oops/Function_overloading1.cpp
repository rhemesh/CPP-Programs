#include<iostream>

using namespace std;

class Func_Overloading
{
    int a,b;
    double c,d;
    public:
    void set_values(int x,int y)
    {
        a = x;
        b = y;
    }
    void set_values(double x,double y)
    {
        c = x;
        d = y;
    }
    void print()
    {
        cout<<"a and b = "<<a<<" "<<b<<endl;
        cout<<"c and d = "<<c<<" "<<d<<endl;
    }
};

int main()
{
    Func_Overloading obj;
    obj.set_values(1,2);
    obj.set_values(2.3,44.5);
    obj.print();

    return 0;
}


//Function overloading:Having function with the same name but different arguments 
//Arguments can be of diffetiated based on:1.type of arg,2.order of arg,3.num of args