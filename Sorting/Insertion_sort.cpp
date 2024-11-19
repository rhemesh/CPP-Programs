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

    for(int i=1;i<num;i++)
    {
        int key = arr[i];
        int j = i-1;
        while(key < arr[j] && (j>=0))
        {
            arr[j+1] = arr[j];
            j = j-1; 
        }
        arr[j+1] = key;
    }

    cout<<"After Insertion sort array elements are:"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}