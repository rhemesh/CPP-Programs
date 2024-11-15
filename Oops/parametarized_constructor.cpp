#include<iostream>

using namespace std;

class num
{
    int a,b;
    public:
    num(int x,int y)
    {
        a = x;
        b = y;
    }

    void sum()
    {
        cout<<"Sum of a and b = "<<a+b<<endl;
    }
};

int main()
{
    num n1(10,20);
    num n2(2,5);

    n1.sum();
    n2.sum();

    return 0;

}

//If we pass arguments from objects,constructor can receive that arguments.
//for all the multiple objects memory will be allocated separately.