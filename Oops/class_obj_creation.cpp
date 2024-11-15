#include<iostream>

using namespace std;

class number
{
    int a=10 ,b=20;
    public:
    void sum()
    {
        cout<<"Sum of a and b = "<<a+b<<endl;
    }

    void product()
    {
        cout<<"Product of a and b = "<<a*b<<endl;
    }
};

int main()
{
    number obj;
    obj.sum();
    obj.product();

    return 0;
    
}