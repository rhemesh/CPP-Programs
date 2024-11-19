#include<iostream>

using namespace std;

class circle
{
    protected:
    float radius;
    public:
    virtual void area() = 0; //pure virtual function//abstract func/class
    void set_value(float r)
    {
        radius = r;
    }

};
class child : public circle
{
    public:
    void area()
    {
        cout<<"area of the circle  = "<<3.142*radius*radius;
    }
};

int main()
{
    child c;
    c.set_value(10);
    c.area();


    // circle *ch = new child();
    // ch->set_value(10);
    // ch->area();

    return 0;

}