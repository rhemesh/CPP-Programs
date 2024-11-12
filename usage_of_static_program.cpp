#include<iostream>

using namespace std;

class st
{
    int code;
    static int count;
    public:
    st()
    {
        cout<<"constructor"<<endl;
        code  = ++count;
    }
    void showcode()
    {
        cout<<"code  = "<<code<<endl;
    }
    static void showcount()
    {
        cout<<"count = "<<count<<endl;
    }
};
int st::count;
int main()
{
    st s1,s2,s3;
    s1.showcode();
    s1.showcount();
    s2.showcode();
    s2.showcount();
    s3.showcode();
    s3.showcount();
}