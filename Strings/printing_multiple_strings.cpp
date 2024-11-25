#include<iostream>

using namespace std;

int main()
{
    string str[5];

    cout<<"enter the string:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>str[i];
    }

    cout<<"Strings are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<str[i]<<" ";
    }
}