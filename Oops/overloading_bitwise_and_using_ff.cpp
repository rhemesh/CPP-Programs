#include<iostream>

using namespace std;

class op
{
    int x,y;
    public:
    op(int a = 0,int b =0) : x(a),y(b) {}

    void print()
    {
        cout<<"x = "<<x<<" "<<"y = "<<y<<endl;
    }

    friend op operator&(op &s1,op &s2)
    {
        op s3;
        s3.x = s1.x & s2.x;
        s3.y = s1.y & s2.y;
        return s3;
    }

};

int main()
{
    op o1(5,3);
    op o2(45,6);
    o1.print();
    o2.print();

    op o3 = o1 & o2;
    cout<<"After doing && operation values of a and b are:"<<"\n";
    o3.print();

    return 0;

}