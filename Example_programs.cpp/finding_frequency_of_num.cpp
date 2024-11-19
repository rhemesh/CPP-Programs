#include<iostream>

using namespace std;

int findfrequency(long long int num,int n)
{
    int count = 0;
    while(num>0)
    {
        if(num%10 ==n)
        {
            count++;
        }
        num /=10;
    }
    return count;
}
int main()
{
    long long int num;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int n;
    cout<<"enter the element to find that frequency:"<<endl;
    cin>>n;
    int count = findfrequency(num,n);

    cout<<"Frequency of num "<<n<<" = "<<count<<endl;



}