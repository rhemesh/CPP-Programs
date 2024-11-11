#include<iostream>

using namespace std;

int product(int x,int y=0,int z=1);
int main()
{
    cout<<product(20)<<endl;
    cout<<product(10,20,2)<<endl;
    cout<<product(2,3)<<endl;

    return 0;

}

int product(int x,int y,int z)
{
    return x*y*z;
}

//Here,default values should be assigned by Lhs to Rhs 

//default values can be declared in function declaration or func prototype
