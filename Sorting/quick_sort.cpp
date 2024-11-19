#include<iostream>

using namespace std;

int divide(int start,int end,int *arr)
{
    int pivot = arr[end];
    int index = start;

    for(int i= start;i<end;i++)
    {
        if(arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }

    int temp = arr[end];
    arr[end] = arr[index];
    arr[index] = temp;
    return index;

}

void quick(int start,int end,int *arr)
{
    if(start<end)
    {
        int d = divide(start,end,arr);
        quick(start,d-1,arr);
        quick(d+1,end,arr);
    }
}
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

    quick(0,num-1,arr);

    cout<<"After quick sort array elements are:"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}