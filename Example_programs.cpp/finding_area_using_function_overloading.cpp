#include<iostream>
#define pi 3.142
using namespace std;

class fn
{
    public:
    void area(int r);
    void area(int l,int w);
    void area(float f,int b,int h);
};
void fn::area(int r)
{
    cout<<"area of circle = "<<pi*r*r<<endl;
}
void fn::area(int l,int w)
{
    cout<<"area of rectangle = "<<l*w<<endl;
}
void fn::area(float f,int b,int h)
{
    cout<<"area of triangle = "<<f*b*h<<endl;
}

int main()
{
    fn f;
    int ch;
    int r,a,b;
    cout<<"enter the value to choose between 1.circl 2.rectangle 3.triangle:"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
            cout<<"enter radius:"<<endl;
            cin>>r;
            f.area(r);
            break;
        case 2:
            cout<<"enter width and length:"<<endl;
            cin>>a>>b;
            f.area(a,b);
            break;
        case 3:
            cout<<"enter breadth and height:"<<endl;
            cin>>a>>b;
            f.area(0.5,a,b);
            break;
        default:
            cout<<"Enter correct value ie 1/2/3"<<endl;
            break;
    }

    return 0;

}