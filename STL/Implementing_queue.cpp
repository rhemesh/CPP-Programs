#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;
    q.push("abc");
    q.push("def");
    q.push("ghi");
    q.push("jkl");
    cout<<"Size of queue = "<<q.size()<<"\n";
    cout<<"queue back = "<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<"\n";
        q.pop();

    }

}