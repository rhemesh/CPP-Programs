#include<iostream>

using namespace std;

int main()
{
    int rows,cols;
    cout<<"enter the row and col values:"<<endl;
    cin>>rows>>cols;
    int arr[rows][cols];
    cout<<"enter the values:"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Matrix of arra = "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Sum of rows  = ";
    for(int i=0;i<rows;i++)
    {
        int rowsum = 0;
        for(int j=0;j<cols;j++)
        {
            rowsum+=arr[i][j];
        }
        cout<<rowsum<<" ";
    }
    cout<<endl;
    cout<<"Sum of cols = "<<endl;
    for(int i=0;i<rows;i++)
    {
        int colsum = 0;
        for(int j=0;j<cols;j++)
        {
            colsum+=arr[j][i];
        }
        cout<<colsum<<endl;
    }

    return 0;

}