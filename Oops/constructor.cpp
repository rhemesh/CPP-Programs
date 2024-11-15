#include<iostream>

using namespace std;

class num
{
    int x,y;
    public:
    num()
    {
        x = 11;
        y = 20;
    }
    void print()
    {
        cout<<"x = "<<x<<"\n"<<"y = "<<y<<endl;
    }
};

int main()
{
    num n;
    n.print();

    return 0;

}