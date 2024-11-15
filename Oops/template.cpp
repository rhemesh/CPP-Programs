#include<iostream>
using namespace std;

template<typename T>
T findmax(T a,T b)
{
    return (a>b)?a:b;
}

int main()
{
    cout<< findmax<int>(5,6)<<endl;
    cout<< findmax<double>(3.7,34.3);
}