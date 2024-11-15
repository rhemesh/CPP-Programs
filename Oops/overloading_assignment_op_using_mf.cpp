#include<iostream>

using namespace std;

class op
{
    int a;
    public:
    op(int a = 0) : a(a) {}

    void Show()
    {
        cout<<"a = "<<a<<endl;
    }

    void operator=(op &o2)
    {
        a = o2.a;
    }
};

int main()
{
    op s1(3);
    s1.Show();
    op s2(5);
    s2.Show();

    s1 = s2;
    cout<<"After overloading assignment operator a = "<<endl;
    s1.Show();

}