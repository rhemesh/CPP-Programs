#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector<int> vec;
    for(int i=0;i<5;i++)
    {
        vec.push_back(i);
    }

    for(auto i=vec.begin();i!=vec.end();i++)
    {
        cout<<*i<<" ";
    }

    // vector<int>::iterator it;
    // for(it = vec.begin();it !=vec.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
}