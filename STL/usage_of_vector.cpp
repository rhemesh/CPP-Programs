#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    
    cout<<"Vector size  = "<<v.size()<<"\n";
    for(int i=0;i<5;i++)
    {
        v.push_back(i);
    }
    cout<<"Values are:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"Vector size  = "<<v.size()<<endl;
}