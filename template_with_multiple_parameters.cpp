#include<iostream>

using namespace std;

template<class i,class j>
j sum(i a,j b)
{
    return a+b;
}

template<class c>
c sub(c x,c y)
{
    return x-y;
}

int main()
{
    cout<<sum<int,double>(5,6.5)<<endl;
    cout<<sub<int>(56,34);

    return 0;

}
