#include<iostream>

using namespace std;

class op
{
    int a,b;
    public:
    op(int a = 0,int b = 0) : a(a),b(b) {}

    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }

    op operator-(op & o2)
    {
        op o3;
        o3.a = a - o2.a;
        o3.b = b - o2.b;
        return o3;
    }

};

int main()
{
    op obj1(10,12);
    obj1.display();
    op obj2(4,6);
    obj2.display();

    op obj3 = obj1 - obj2;

    obj3.display();

    return 0; 

}