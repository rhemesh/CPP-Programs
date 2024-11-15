#include<iostream>

using namespace std;

class op
{
    int a,b;
    public:
    op(int a = 0,int b = 0) : a(a),b(b) {}

    void Show()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }

    void operator&(op &o2)
    {
        op o3;
        o3.a = a & o2.a;
        o3.b = b & o2.b;
        cout<<"After doing && operation a and b values are:"<<"\n";
        o3.Show();
    }
};

int main()
{
    op s1(3,4);
    s1.Show();
    op s2(5,6);
    s2.Show();

    s1 & s2;

}