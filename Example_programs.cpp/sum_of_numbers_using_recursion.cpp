#include<iostream>

using namespace std;

int sum(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n + sum(n - 1);

}

int main()
{
    int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;

    int res = sum(num);
    cout<<"Sum of numbers  = "<<res;

    return 0;

}