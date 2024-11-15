#include<iostream>

using namespace std;
int fibonacii(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }

    return fibonacii(num-1) + fibonacii(num -2);
}
int main()
{
    int n;
    cout<<"enter n value:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<fibonacii(i)<<" ";
    }
}