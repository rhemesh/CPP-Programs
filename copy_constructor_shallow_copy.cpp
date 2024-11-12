#include<iostream>

using namespace std;

class character
{
    char ch;
    public:
    character(char c)
    {
        ch = c;
    }
    void display()
    {
        cout<<"charcter = "<<ch<<endl;
    }
};
int main()
{
    character c('H');
    c.display();
    character c1(c);
    c1.display();
    
    return 0;

}