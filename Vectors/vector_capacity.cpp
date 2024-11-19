#include<iostream>
#include<vector>
#include<iterator>

using namespace std;

int main()
{
    vector<int> v;
    for(int i=0;i<7;i++)
    {
        v.insert(v.begin()+i,i);
    }

    cout<<"Size of vector = "<<v.size()<<endl;
    cout<<"Size of capacity = "<<v.capacity()<<endl;
    cout<<"Max size of vector = "<<v.max_size()<<endl;

    v.resize(15);
    cout<<"After resizing,size  = "<<v.size()<<endl;

    if(v.empty() == true)
    {
        cout<<"Vector is empty";
    }
    else{
        cout<<"Vector is not empty";
    }

    return 0;

}