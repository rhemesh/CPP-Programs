#include<iostream>

using namespace std;

void swap(int &x,int &y)
{
    int temp =x;
    x=y;
    y=temp;
    cout<<"Values Inside swapp function:"<<x<<" "<<y<<endl;

}
int main()
{
    int a,b;
    cout<<"Enter a and b value:"<<endl;
    cin>>a>>b;
    cout<<"Values before swapping:"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"Values after swapping:"<<a<<" "<<b<<endl;

    return 0;

}

//This is a call by reference where we pass address of the main variables so whenever we change the contents inside the function will reflect the main variable.
//C++ supports reference operator where C doesn't support 