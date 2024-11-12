#include<iostream>

using namespace std;

class character 
{
    char fc,lc;
    public:
    character(char a,char b)
    {
        fc = a;
        lc = b;
    }
    character(character &obj)
    {
        cout<<"Inside userdefined copy function"<<endl;
        fc = obj.fc;
        lc = obj.lc;
        cout<<"characters copied"<<endl;
    }
    void display()
    {
        cout<<"First character  = "<<fc<<endl;
        cout<<"Last character  = "<<lc<<endl;
    }
};

int main()
{
    character c1('H','E');
    c1.display();
    character c2(c1);
    c2.display();

    return 0;

}
