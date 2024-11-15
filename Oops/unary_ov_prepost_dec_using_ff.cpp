#include<iostream>

using namespace std;

class op
{
    int x;
    public:
    void set_value(int x = 0)
    {
        this->x = x;
    }

    void display()
    {
        cout<<"x  = "<<x<<endl;
    }

    friend void operator--(op &s)
    {
        --s.x;
    }

    friend void operator--(op &s,int )
    {
        s.x--;
    }
};

int main()
{
    op obj;
    obj.set_value(21);
    obj.display();
    --obj;
    cout<<"After prefix decrementation"<<endl;
    obj.display();
    obj--;
    cout<<"After postfix decrementation"<<endl;
    obj.display();

    return 0;

}