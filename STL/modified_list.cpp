#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;
    for(int i=0;i<10;i++)
    {
        l.push_back(i);
    }
    cout<<"Size of list  =  "<<l.size()<<endl;

    list<int>::iterator lst = l.begin();

    while(lst != l.end())
    {
        cout<<*lst<<endl;
        lst++;
    }

    lst = l.begin();
    while(lst != l.end())
    {
        *lst = *lst + 5;
        lst++;
    }
    cout<<"After modification:"<<endl;
    lst = l.begin();
    while(lst != l.end())
    {
        cout<<*lst<<endl;
        lst++;
    }


}