#include<iostream>

using namespace std;

namespace first
{
    int a = 20;
    void func()
    {
        cout<<"This is first namespace"<<endl;
    }
}

namespace second
{
    double a = 12.7;
    void func()
    {
        cout<<"This is the second namespace"<<endl;
    }
}
/*
//using scope resolution operator ::
int main()
{
    cout<<first::a<<endl;
    first::func();

    cout<<second::a<<endl;
    second::func();

    return 0;

}
*/

//"using" keyword
int main()
{
    {
        using namespace first;
        cout<<"a = "<<a<<endl;
        func();
    }

    {
        using namespace second;
        cout<<"a = "<<a<<endl;
        func();
    }

    return 0;

}
