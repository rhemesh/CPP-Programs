#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> v(6);
    fill(v.begin(),v.begin()+3,5);
    fill(v.begin()+3,v.begin()+5,10);
    vector<int>::iterator i = v.begin();
    for(i;i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
}