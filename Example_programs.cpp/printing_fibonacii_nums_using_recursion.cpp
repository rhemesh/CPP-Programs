#include<iostream>

using namespace std;
int fibonacii(int num)
{
    if(num == 0 || num == 1)
    {
        return num;
    }

    return fibonacii(num-1) + fibonacii(num -2);
}
int main()
{
    int n;
    cout<<"enter n value:"<<endl;
    cin>>n;
    int sum =0;
    for(int i=0;i<n;i++)
    {
       int res = fibonacii(i);
       cout<<res<<" ";
       if(res%2==0)
       {
            sum = sum +res;
       }
    }
    cout<<"\n";
    cout<<"sum of even fibonacii numbers:"<<sum;
}


//Here we are printing the fibonacii series

//If we want to print fibonacii till particular number then we can use the condition  for(int i=1;fibonacii(i)<=n;i++)
//This prints only within that number for ex:10 then it prints below 10 fibonacii 112358