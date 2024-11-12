#include<iostream>

using namespace std;

class nums
{
    public:
    nums(int x = 0,int y = 0,int z = 1)
    {
        cout<<"Sum of x,y and z = "<<x+y+z<<endl;
    }
};
int main()
{
    nums obj1(2,3,4);
    nums obj2(23);
    nums obj3(34,56);
    nums obj4;

    return 0;

}


//Here,deafult values are used in constructor.
//Default values should be declared from Rhs to Lhs