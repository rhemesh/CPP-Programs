#include<iostream>

using namespace std;

int main()
{
    string str1,str2;
    cout<<"Enter str1 and str2:"<<endl;
    getline(cin,str1);
    getline(cin,str2);
    if(str1.compare(str2))
    {
        cout<<"strings are not equal"<<endl;
    }
    else{
        cout<<"strings are equal";
    }
}

//If the strings are equal it returns 0