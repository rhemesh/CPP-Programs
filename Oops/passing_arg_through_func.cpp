#include<iostream>

using namespace std;

class Maths
{
    int a,b;
    public:
    void assign_values(int x,int y)
    {
        a = x;
        b = y;
    }

    void sum()
    {
        cout<<"Sum of a and b = "<<a+b<<endl;
    }
    int sub()
    {
        return a-b;
    }
};

int main()
{
    Maths m1;
    m1.assign_values(20,6);
    m1.sum();
    cout<<"difference of a and b = "<<m1.sub()<<endl;


    return 0;
    
}