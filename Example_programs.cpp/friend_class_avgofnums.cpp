#include<iostream>

using namespace std;

class A
{
    int a,b;
    public:

    void set_values(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    friend class B;
};

class B
{
    int avg;
    public:
    int find_average()
    {
        A obj;
        obj.set_values(10,20);
        return (obj.a+obj.b)/2;
    }
};

int main()
{
    B b;
   cout<<b.find_average();

}