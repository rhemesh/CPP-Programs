#include<iostream>

using namespace std;

double area(int radius)
{
    return 3.142 * radius * radius;
}

int area(int length,int breadth)
{
    return length * breadth;
}

int main()
{
    cout<<area(10)<<endl;
    cout<<area(10,20)<<endl;

    return 0;

}