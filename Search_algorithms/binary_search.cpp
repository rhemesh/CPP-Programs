#include<iostream>

using namespace std;

int binary_search(int arr[],int low,int high,int key)
{
    while(low<=high)
    {
        int mid = (low+high)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key<arr[mid])
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return 0;
}
int main()
{
    int num;
    cout<<"enter num value:"<<endl;
    cin>>num;
    int arr[num];
    cout<<"enter array elements:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key element to search:"<<endl;
    cin>>key;

    int len = sizeof(arr)/sizeof(arr[0]);

    int pos = binary_search(arr,0,len-1,key);

    cout<<"Key element found at the position "<<pos;

}