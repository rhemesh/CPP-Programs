#include<iostream>

using namespace std;

class op
{
    int x;
    public:
    op(int x = 0) : x(x) {}

    void demonstrate()
    {
        cout<<"x = "<<x<<endl;
    }

    void operator--()
    {
        --x;
    }
    void operator--(int )
    {
        x--;
    }
};

int main()
{
    op obj(5);
    obj.demonstrate();
    --obj;
    cout<<"After prefix Decrementation"<<endl;
    obj.demonstrate();
    obj--;
    cout<<"After postfix Decrementation"<<endl;
    obj.demonstrate();

    return 0;


}