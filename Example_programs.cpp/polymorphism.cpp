#include<iostream>
using namespace std;

class Animal
{
    public:
    virtual void speed()
    {
        cout<<"Who's is faster?"<<endl;
    }
};
class cheetah :  public Animal
{
    public:
    void speed()
    {
        cout<<"I'm faster on ground"<<endl;
    }
};
class dolphin :  public Animal
{
    public:
    void speed()
    {
        cout<<"I'm faster in water"<<endl;
    }
};

int main()
{
    cheetah c;
    dolphin d;
    Animal obj;
    obj.speed();

//Implementing run time polymorthism
    Animal *a;
    a = &c;
    a->speed(); //this calls cheetah

    a = &d;
    a->speed();//this calls dolphin


    c.speed();
    d.speed();

}