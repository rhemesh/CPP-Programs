#include<iostream>
#include<string>
using namespace std;

class Intro
{
    string name;
    public:
    void set(string str)
    {
        name = str;
    }
    string display();
};

string Intro::display()
{
    return name;
}

int main()
{
    Intro obj;
    obj.set("Hemesh");
    cout<<"Name = "<<obj.display();

    return 0;

}