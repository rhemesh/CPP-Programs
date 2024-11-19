#include<iostream>

using namespace std;

class prime
{
    int num;
    int count = 0;
    public:
    prime(int n)
    {
        num = n;

        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
    }

    void check()
    {
        if(count == 0)
        {
            cout<<"entered number is a prime"<<endl;
        }
        else{
            cout<<"it is not prime"<<endl;
        }
    }

};

int main()
{
    int n;
    cout<<"Enter the number to find prime or not:"<<endl;
    cin>>n;
    prime p(n);

    p.check();

}

