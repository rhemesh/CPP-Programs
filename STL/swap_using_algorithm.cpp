#include<iostream>


using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a and b value:"<<endl;
    cin>>a>>b;
    cout<<"Values of a and b before swap = "<<a<<" "<<b<<"\n";
    swap(a,b);
    cout<<"Values of a and b after swap = "<<a<<" "<<b<<"\n";


}