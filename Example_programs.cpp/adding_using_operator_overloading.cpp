#include<iostream>

using namespace std;

class op
{
    int a,b;
    public:
    void set_values(int a,int b)
    {
        this->a=a;
        this->b=b;
    }

    void display()
    {
        cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    }

    friend op operator+(op& , op& );
};


op operator+(op &o1,op &o2)
{
    op o3;
    o3.a = o1.a + o2.a;
    o3.b = o1.b + o2.b;
    return o3;
}

int main()
{
    op obj1;
    obj1.set_values(2,3);
    op obj2;
    obj2.set_values(5,6);
    op obj3 = obj1+obj2;
    obj3.display();
    

}

