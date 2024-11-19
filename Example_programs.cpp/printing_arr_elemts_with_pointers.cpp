#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter num value:"<<endl;
    cin>>num;
    int *ptr = new int[num];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>*(ptr + i);
    }

    cout<<"Array elements are:"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
}