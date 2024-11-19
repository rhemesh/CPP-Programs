#include<iostream>

using namespace std;

int main()
{
    int rows =3,cols =4;
    int **ptr = new int*[rows];
    for(int i=0;i<rows;i++)
    {
        ptr[i] = new int[cols];
    }

    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>ptr[i][j];
        }
    }

    cout<<"Array elements are:"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<ptr[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(int i=0;i<rows;i++)
    {
        delete [] ptr[i];
    }
    delete []ptr;
}