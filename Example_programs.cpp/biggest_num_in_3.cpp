#include<iostream>

using namespace std;

int biggest(int a,int b,int c)
{
    return a>b?(a>c?a:c):(b>c?b:c);
}

int main()
{
    int a,b,c;
    cout<<"Enter a,b, and c values to find biggest in them:"<<endl;
    cin>>a>>b>>c;
    int res = biggest(a,b,c);

    cout<<"value "<<res<<" is biggest in all among"<<endl;
}