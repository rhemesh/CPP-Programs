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
    int temp = 0;
    for(int i=0;i<num;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            if(arr[j] < arr[i])
            {
                arr[i] = arr[i]^arr[j];
                arr[j] = arr[i]^arr[j];
                arr[i] = arr[i]^arr[j];
            }
        }
    }


    cout<<"After bubble sort array elements are:"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}