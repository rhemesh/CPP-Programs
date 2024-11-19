#include<iostream>

using namespace std;

template<class T,class U=char>
class A
{
    T a;
    U b;
    public:
    A(T x,U y)
    {
        a=x;
        b=y;
    }
    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }
};

int main()
{
    A<char>a('H','E');
    a.display();
}
