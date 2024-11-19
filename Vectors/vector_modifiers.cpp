#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;

    v.assign(2,5);    //assigns two values with the value 5
    cout<<"Size of vector = "<<v.size()<<endl;
    cout<<"Elements inside vector = "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";

    v.push_back(10);
    v.push_back(20);
    int v1 = v.size();
    cout<<"After pushing two values,last element = "<<v[v1]<<endl;
    v.pop_back();
    cout<<"After popping the element,remaining elements are:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<"\n";

    v.insert(v.begin(),11);

    cout<<"First value in vector = "<<v[0]<<endl;

    v.clear();

    cout<<"size = "<<v.size();




    
}