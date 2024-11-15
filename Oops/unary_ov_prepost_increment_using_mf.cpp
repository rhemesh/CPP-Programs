#include<iostream>

using namespace std;

class op
{
    int a;
    public:
    op(int x = 0) :a(x) {}

    void print()
    {
        cout<<"a = "<<a<<endl;
    }

    void operator++(); //pre increment

    void operator++(int ); //post increment
};

void op::operator++()  //pre Incrementation
{
    ++a;
}

void op::operator++(int ) //post Incrementation
{
    a++;
}


int main()
{
    op o1(12);
    o1.print();
    ++o1;
    cout<<"After Pre incrementing"<<endl;
    o1.print();
    o1++;
    cout<<"After post Incrementing"<<endl;
    o1.print();


    return 0;

}


