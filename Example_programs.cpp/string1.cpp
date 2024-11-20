#include<iostream>

using namespace std;

int main()
{
    string str;

    int count = 5;
    while(count--)
    {
        getline(cin,str);
        cout<<str<<":newline"<<endl;
    }


}