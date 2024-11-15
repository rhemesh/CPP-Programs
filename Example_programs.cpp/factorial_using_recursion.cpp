#include<iostream>

using namespace std;

int findfact(int n)
{
    if(n <= 0)
    {
        return 1;
    }

    return n * findfact(n-1);

}
int main()
{
    int num;
    cout<<"Enter the number to find factorial:"<<endl;
    cin>>num;
    int res = findfact(num);
    cout<<"Factorial of num entered = "<<res;

}