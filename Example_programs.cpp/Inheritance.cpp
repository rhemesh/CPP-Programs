#include<iostream>
using namespace std;

class par
{
    public:
    string name1 = "Rolls";
};
class child : public par
{
    public:
    string name2 = "Royce";
};

int main()
{
    child c;
    cout<<c.name1+" "+c.name2<<endl;

    return 0;

}