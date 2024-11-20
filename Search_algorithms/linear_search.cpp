#include<iostream>

using namespace std;

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
    int i;
    bool isfound = false;
    for(i=0;i<num;i++)
    {
        if(arr[i]==key)
        {
            isfound = true;
            break;
        }
    }
    if(isfound)
    {
        cout<<"Key element found at the position "<<i+1;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;

}