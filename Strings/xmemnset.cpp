#include<iostream>
#include<cstring>

using namespace std;

void xmemnset(char *str,char c,int n)
{
    
    for(int i=0;i<n && str[i]!='\0';i++)
    {
        str[i] = c;
    }
}
int main()
{
    char str[10];
    cout<<"enter string:"<<endl;
    cin.getline(str,sizeof(str));
    
    char ch;
    cout<<"enter the character:"<<endl;
    cin>>ch;
    int n;
    cout<<"Enter n value :"<<endl;
    cin>>n;
    xmemnset(str,ch,n);
    cout<<"str = "<<str<<endl;   
}