#include<iostream>

using namespace std;

class animal
{
    protected:
    int weight;
    public:
    animal()
    {
        cout<<"Inside base class animal"<<endl;
    }
    int get_weight(int w)
    {
        weight = w;
        return weight;
    }
};
class Lion :virtual public animal
{
    public:
    Lion()
    {
        cout<<"Inside Lion class"<<endl;
    }
};
class Tiger :virtual public animal
{
    public:
    Tiger()
    {
        cout<<"Inside Tiger class"<<endl;
    }
};
class Liger :public Lion,public Tiger{
    public:
    Liger()
    {
        cout<<"Inside Liger"<<endl;
    }
};

int main()
{
    Liger l;
    cout<<l.get_weight(10)<<endl;
}


//This program produces death of diamond issue or ambiguity error this issue can be solved using virtual keyword