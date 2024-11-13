#include<iostream>

using namespace std;

class Shape
{
    protected: int width,height;
    public:
    void set_width(int w)
    {
        width = w;
    }
    void set_height(int h)
    {
        height = h;
    }

    int area();
};
class Rectangle :public Shape
{
    public:
    int area()
    {
        return width*height;
    }
};

int main()
{
    Rectangle r;
    r.set_width(10);
    r.set_height(20);

    cout<<"Total area of rectangle = "<<r.area()<<endl;
}