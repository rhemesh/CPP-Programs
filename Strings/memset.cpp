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
    int length = strlen(str);
    memset(str,ch,length);
    cout<<"str = "<<str<<endl;   

    return 0;

}