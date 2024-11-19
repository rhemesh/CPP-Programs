#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=2;i<num;i++)
    {
        
        int isprime = true;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j == 0)
            {
                isprime = false;
                break;
            }
        }
        if(isprime)
        {
            cout<<i<<" ";
        }
    }
}