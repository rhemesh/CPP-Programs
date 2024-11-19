#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter num value:"<<endl;
    cin>>num;
    int arr[num];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<num-1;i++)
    {
        int minindex = i;
        for(int j=i+1;j<num;j++)
        {
            if(arr[j] < arr[minindex])
            {
                minindex = j;
            }
        }

        if(minindex != i)
        {
            arr[i]          = arr[i]    ^   arr[minindex];
            arr[minindex]   = arr[i]    ^   arr[minindex];
            arr[i]          = arr[i]    ^   arr[minindex];
        }
    }

    cout<<"After selection sort array elements are:"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}