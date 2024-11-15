#include<iostream>

using namespace std;

int main()
{
    int *np = new int[10];
    cout<<"Enter the elements of an array:"<<endl;
    for(int i = 0;i<10;i++)
    {
        //cin>>np[i];
        cin>>*(np + i);
    }
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<10;i++)
    {
        //cout<<np[i]<<" ";
        cout<<*(np + i)<<" ";
    }

    delete []np;

    return 0;

}