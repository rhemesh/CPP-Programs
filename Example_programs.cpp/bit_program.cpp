#include<iostream>

using namespace std;

int main()
{
    int subnum;
    cout<<"Enter sub array length:"<<endl;
    cin>>subnum;

    int bitmask;
    cout<<"Enter the bit mask:"<<endl;
    cin>>bitmask;

    int num;
    cout<<"Enter the number of elements:"<<endl;
    cin>>num;

    int arr[num];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target value:"<<endl;
    cin>>target;
    int count = 0;
    for(int i=0;i<=num - subnum;i++)
    {
        int xor_result = 0;
        for(int j=0;j<subnum;j++)
        {
            cout<<arr[i+j]<<" ";
            xor_result ^= arr[i+j];
        }
        xor_result &= bitmask;

        if(xor_result == target)
        {
            count++;
        }

        cout<<"\n";
    }
    cout<<"count = "<<count<<endl;

    return 0;

}