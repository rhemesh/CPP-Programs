#include<iostream>

using namespace std;

int main()
{
    char **str = new char*[5];

    for(int i=0;i<5;i++)
    {
        str[i] = new char[15];
    }

    cout<<"Enter 5 string of length less than 15:"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>str[i];
    }

    cout<<"strings are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<str[i]<<" ";
    }

    return 0;
}