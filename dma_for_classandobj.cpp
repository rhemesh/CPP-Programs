#include<iostream>

using namespace std;

class Box
{
    public:
    Box()
    {
        cout<<"Inside constructor"<<endl;
    }
};

int main()
{
    Box b;   //static
    Box *obj = new Box; //dynamic
    Box *obj1 = new Box[5];  //dynamic with array of objects
    delete obj;
    delete [] obj1;
}