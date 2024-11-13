#include<iostream>

using namespace std;

class op
{
    int x,y;
    public:
    op(int a = 0,int b = 0) : x(a),y(b) {}

    void display()
    {
        cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    }

    friend op operator+(op &o1,op &o2)
    {
        op o3;
        o3.x = o1.x + o2.x;
        o3.y = o1.y + o2.y;
        //o3.display();
        return o3;
    }
};

int main()
{
    op obj1(10,20);
    obj1.display();
    op obj2(22,45);
    obj2.display();

    op obj3 = obj1+obj2;
    obj3.display();
    
    return 0;

}