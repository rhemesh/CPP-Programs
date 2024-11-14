#include<iostream>
#include<string>
using namespace std;

class Intro
{
    string name;
    public:
    Intro(int n)
    {
        cout<<"n = "<<n<<endl;
    }
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
    Intro obj(1);
    obj.set("Hemesh");
    cout<<"Name = "<<obj.display();

    return 0;

}