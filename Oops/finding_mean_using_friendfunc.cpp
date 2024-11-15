#include<iostream>

using namespace std;

class frnd
{
    int a,b,c;
    public:
    frnd(int a,int b,int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        cout<<"constructor"<<endl;
    }
    friend int mean(frnd);
};
int mean(frnd f)
{
    int res = (f.a + f.b + f.c)/3;
    return res;
}

int main()
{
    frnd obj(4,4,5);
    cout<<mean(obj)<<endl;;

    return 0;

}