#include<iostream>
using namespace std;

class salary
{
    int sal = 100;
    public:
    friend int emp(salary);

};

int emp(salary s)
{
    s.sal = s.sal + 50000;
    return s.sal;
}

int main()
{
    salary s;
    cout<<emp(s);
}
