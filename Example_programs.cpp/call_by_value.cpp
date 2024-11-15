#include<iostream>

using namespace std;

void swap(int x,int y)
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

//This is pass by value here only copy of the variables are passed to the function.
//values swapped only in the function it will not reflect the main variable because it is local to that function