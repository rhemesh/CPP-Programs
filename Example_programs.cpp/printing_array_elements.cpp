#include<iostream>

using namespace std;

int main()
{
    int arr[] = {34,2,4,6,2,7,43,56};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout<<"length of array elements:"<<len<<endl;
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }
}