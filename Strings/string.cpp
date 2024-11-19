#include<iostream>

using namespace std;

int main()
{
    string s;
    cout<<"Enter the string:"<<endl;
    getline(cin,s);
    s.push_back('H');
    cout<<"String = "<<s<<endl;
    s.pop_back();
    cout<<"After removing = "<<s<<endl;

    return 0;
}