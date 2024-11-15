#include<iostream>


using namespace std;

class frnd
{
    char ch;
    string name;
    public:
    frnd()
    {
        ch = 'H';
        name = "Hemesh";
        cout<<"Constructor"<<endl;
    }

    ~frnd()
    {
        cout<<"Destructor"<<endl;
    }
    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"Starting character of name = "<<ch<<endl;
    }

    friend void create_obj();
};

void create_obj()
{
    frnd f;
    f.display();
}


int main()
{
    create_obj();

    return 0;

}