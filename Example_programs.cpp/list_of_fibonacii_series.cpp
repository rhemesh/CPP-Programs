#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter the num value:"<<"\n";
    cin>>num;
    int n1 = 0;
    int n2 = 1;
    int nextterm = n1 + n2;
    cout<<n1<<" "<<n2<<" ";
    while(nextterm<=num)
    {
        cout<<nextterm<<" ";
        n1 = n2;
        n2 = nextterm;
        nextterm = n1 + n2;
    }

    return 0;

}