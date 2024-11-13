#include<iostream>

using namespace std;

class number
{
    protected:
    int num;
    public:
    number()
    {
        cout<<"number constructor"<<endl;
    }
    ~number()
    {
        cout<<"number destructor"<<endl;
    }
    void set_num(int n)
    {
        num = n;
    }
};
class square : public number
{
    public:
    square()
    {
        cout<<"square constructor"<<endl;
    }
    ~square()
    {
        cout<<"square destructor"<<endl;
    }
    int sqr()
    {
        return num*num;
    }
};
class cube : public number
{
    public:
    cube()
    {
        cout<<"cube constructor"<<endl;
    }
    ~cube()
    {
        cout<<"cube destructor"<<endl;
    }
    int cub()
    {
        return num*num*num;
    }
};

int main()
{
    square s;
    s.set_num(5);
    cout<<"square of num = "<<s.sqr()<<endl;
    cube c;
    c.set_num(3);
    cout<<"cube of num = "<<c.cub()<<endl;

}