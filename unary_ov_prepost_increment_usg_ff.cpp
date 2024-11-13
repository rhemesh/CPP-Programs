#include<iostream>

using namespace std;

class op
{
    int a;
    public:
    op(int x = 0) : a(x) {} //Initializer list
    void show()
    {
        cout<<"a = "<<a<<endl;
    }

    friend void operator ++(op &);  //prefix incrementation
    friend void operator ++(op &,int ); //postfix incrementation
};

void operator ++(op &s)
{
    ++s.a;
}
void operator ++(op &s,int v)
{
    s.a++;
}

int main()
{
    op obj(10);
    obj.show();

    ++obj;
    cout<<"After prefix increment:"<<endl;
    obj.show();

    obj++;
    cout<<"after postfix increment:"<<endl;
    obj.show();

    return 0;

}

//using friend function pre incrementing the value of a 