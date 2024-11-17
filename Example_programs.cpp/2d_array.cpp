#include<iostream>
using namespace std;

int main()
{
    int num1,num2;

    cout<<"Enter num1 and num2:"<<endl;
    cin>>num1>>num2;
    int arr[num1][num2];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<num1;i++)
    {
        for(int j=0;j<num2;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"2D array elements are:"<<endl;
    for(int i=0;i<num1;i++)
    {
        for(int j=0;j<num2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}