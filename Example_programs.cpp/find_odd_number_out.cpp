#include<iostream>

using namespace std;

int main()
{
    int arr[] = {2,3,4,3,6,7,10,6,7,4,2};
    int result = 0;
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<len;i++)
    {
        result =result^arr[i];
    }

    cout<<"Odd number in a array = "<<result<<endl;

    return 0;

}