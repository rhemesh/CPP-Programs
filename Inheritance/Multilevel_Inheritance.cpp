#include<iostream>

using namespace std;

class Shape 
{
    protected:
    int width,height;
    public:
    Shape()
    {
        cout<<"Shape constructor"<<endl;
    }
    ~Shape()
    {
        cout<<"Shape Destructor"<<endl;
    }
    void set_width(int w)
    {
        width = w;
    }
    void set_height(int h)
    {
        height = h;
    }
};

class Rectangle : public Shape
{
    public:
    Rectangle()
    {
        cout<<"Rec constructor"<<endl;
    }
    ~Rectangle()
    {
        cout<<"Rec Destructor"<<endl;
    }
    int area()
    {
        return width*height;
    }
};

class Count : public Rectangle
{
    public:
    Count()
    {
        cout<<"count constructor"<<endl;
    }
    ~Count()
    {
        cout<<"count Destructor"<<endl;
    }
    void count()
    {
        cout<<"we have total 5 rectangles"<<endl;
    }
};

int main()
{
    Count c;
    c.count();
    c.set_width(10);
    c.set_height(25);
    cout<<c.area()<<endl;

}


