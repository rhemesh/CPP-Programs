#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the num value:"<<endl;
    cin>>num;

    int arr[num];
    int sum = 0;
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<"sum of array elements are:"<<sum;

    return 0;

}
