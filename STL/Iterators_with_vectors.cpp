#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector<int> v;
    cout<<"Vector size  = "<<v.size()<<"\n";

    for(int i=1;i<=5;i++)
    {
        v.push_back(i);
    }
    cout<<"Values are :"<<endl;
    for(int i=1;i<=v.size();i++)
    {
        cout<<v[i-1]<<" ";
    }
    cout<<"\n";
    vector<int>::iterator vec = v.begin();
    int i=0;
    cout<<"Values after using Iteration"<<endl;
    while(vec != v.end())
    {
        cout<<*vec<<" ";
        vec++;
    }

}