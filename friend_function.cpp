#include<iostream>

using namespace std;

class friend_func 
{
    int a,b;
    public:
    friend_func()
    {
        cout<<"constructor"<<endl;
        a = 5;
        b = 6;
    }
    friend void display(friend_func);
};

void display(friend_func f)
{
    cout<<"a = "<<f.a<<"\n"<<"b = "<<f.b<<endl;
}
int main()
{
    friend_func f;
    display(f);

    return 0;

}