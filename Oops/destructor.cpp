#include<iostream>

using namespace std;

class A
{
    public:
    A()
    {
        cout<<"Constructor"<<endl;
    }
    ~A()
    {
        cout<<"Destructor"<<endl;
    }
};

int main()
{
    A obj[3]; //static 
    A *a = new A;  //dynamic
    A *myarr = new A[5];  //dynamic array
    delete a;
    delete[] myarr;

}


//whenever we are allocating creating objects dynamically we need to deallocate manually or else it will not call destructor.