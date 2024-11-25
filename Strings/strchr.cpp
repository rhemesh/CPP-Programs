#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str[10];
    cout<<"enter string:"<<endl;
    cin.getline(str,sizeof(str));
    
    char ch;
    cout<<"enter the character:"<<endl;
    cin>>ch;
    char *res = strchr(str,ch);
    cout<<"res = "<<res<<endl;
    if(res)
    {
        cout<<"character found in the string:"<<endl;
    }
    else
    {
        cout<<"character not found in the string"<<endl;
    }
}