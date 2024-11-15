#include<iostream>

using namespace std;

class op
{
    int a,b;
    public:
    op(int x = 0,int y = 0) : a(x),b(y) {}

    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }

    void operator+(op &);
};
void op::operator+(op &o2)
{
    static op o3;
    o3.a = a + o2.a;
    o3.b = b + o2.b;
    o3.display();
}

int main()
{
    op o1(2,3);
    op o2(5,6);

    o1.display();
    o2.display();

    cout<<"After adding two objects:"<<endl;
    o1+o2;

    return 0;

}