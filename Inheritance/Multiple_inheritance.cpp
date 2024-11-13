#include<iostream>
#include<cstring>
using namespace std;

class first_name
{
    protected:
    string fn;
    public:
    first_name()
    {
        cout<<"firstname con"<<endl;
    }
    void set_firstname(string str)
    {
        fn = str;
    }
};
class last_name
{
    protected:
    char *ln;
    public:
    last_name()
    {
        cout<<"lastname con"<<endl;
        ln = new char[20];
    }
    ~last_name()
    {
        delete[] ln;
        cout<<"lastname des"<<endl;
    }
    void set_lastname(const char *str)
    {
        strcpy(ln,str);
    }
};
class full_name :public first_name,public last_name
{
    public:
    string fullname;
    full_name()
    {
        cout<<"fullname cons"<<endl;
    }
    void print()
    {
        fullname = fn + " " + string(ln);
        cout<<"fullname = "<<fullname<<endl;
    }
};

int main()
{
    full_name f;
    f.set_firstname("Hemesh");
    f.set_lastname("R");
    f.print();
}