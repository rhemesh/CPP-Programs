#include<iostream>

using namespace std;

class num
{
    int static x;
    public:
    void print()
    {
        cout<<x<<endl;
    }
};
int num::x = 20;

int main()
{
    num obj;
    obj.print();

    return 0;

}

//we cannot initialize the static data members inside the class.
