#include<iostream>

using namespace std;

int main()
{
    int *ptr1 = new int;
    char *ptr2 = new char;
    float *ptr3 = new float;
    int *arr = new int[6];
    char *str = new char[10];

    cout<<"enter *ptr1 int:"<<endl;
    cin>>*ptr1;
    cout<<"enter *ptr2 char:"<<endl;
    cin>>*ptr2;
    cout<<"enter *ptr3 float:"<<endl;
    cin>>*ptr3;
    cout<<"enter the array elements:"<<endl;
    for(int i=0;i<6;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the string"<<endl;
    cin>>str;

    cout<<"*ptr1 = "<<*ptr1<<endl;
    cout<<"*ptr2 = "<<*ptr2<<endl;
    cout<<"*ptr3 = "<<*ptr3<<endl;
    cout<<"The array elements are:"<<endl;
    for(int i=0;i<6;i++)
    {
        cout<<*arr<<" ";
        arr++;
    }
    cout<<"\n";
    cout<<"String  = "<<str<<endl;

    delete ptr1;
    delete ptr2;
    delete ptr3;
    delete []arr;
    delete []str;

    return 0;

}