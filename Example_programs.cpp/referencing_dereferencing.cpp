#include<iostream>

using namespace std;

int main()
{
    int x = 10;
    int *ptr;
    ptr= &x;
    cout<<"value of x = "<<x<<endl;
    cout<<"value of *ptr = "<<*ptr<<endl;
    cout<<"value of ptr = "<<ptr;

    return 0;

}