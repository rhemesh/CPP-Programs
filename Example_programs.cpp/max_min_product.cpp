#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"enter number of values:\n"<<endl;
    cin>>num;
    if(num<2)
    {
        cout<<"please enter the number above 1 because we required atleast to find min and max product"<<endl;
    }
    int arr[num];
    cout<<"enter the array elements:"<<"\n";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    int mul;
    int max = arr[0] * arr[1];
    int min = arr[0] * arr[1];
    for(int i=0;i<num-1;i++)
    {
        for(int j=i+1;j<num;j++)
        {
            mul = arr[i] * arr[j];
            if(mul < min)
            {
                min = mul;
            }
            if(mul > max)
            {
                max = mul;
            }
        }
    }

    cout<<"smallest product of two numbers = "<<min<<endl;
    cout<<"maximum product of two numbers = "<<max<<endl;

    return 0;

}
