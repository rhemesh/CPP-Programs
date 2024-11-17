#include<iostream>

using namespace std;

class num2;
class num1
{
    int a;
    public:
    void assign(int i)
    {
        a=i;
    }
    friend int product(num1,num2);
};

class num2
{
    int b;
    public:
    void assign(int i)
    {
        b=i;
    }
    friend int product(num1,num2);
};

int product(num1 x,num2 y)
{
    return x.a*y.b;
}

int main()
{
    num1 obj1;
    num2 obj2;
    obj1.assign(10);
    obj2.assign(20);
    cout<<product(obj1,obj2);

}

