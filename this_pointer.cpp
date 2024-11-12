#include<iostream>

using namespace std;

class test
{
    int a ,b ;
    public:
    test(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    void print()
    {
        cout<<"Value of a = "<<a<<endl;
        cout<<"Value of b = "<<b<<endl;
    }
};

int main()
{
    test t(110,225);
    t.print();

    return 0;

}

//this points to the address of the current object