#include<iostream>

using namespace std;
void swap_values(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10,b = 50;
    cout<<"Before swapping a  = "<<a<<" "<<"b = "<<b<<endl;
    
    swap_values(a,b);

    cout<<"After swapping a  = "<<a<<" "<<"b = "<<b<<endl;
}

//Here,we are passing the address of a and b so that the value swapped wll be reflected in memory.
//If we are passing arg values then in c++ it will only change locally that is in function only.