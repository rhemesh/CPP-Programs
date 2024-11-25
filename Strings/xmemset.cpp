#include<iostream>
#include<cstring>

using namespace std;

void xmemset(char *str,char c)
{
    int l = 0;
    while(str[l]!='\0')
    {
        l++;
    }
    
    for(int i=0;i<l;i++)
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
    xmemset(str,ch);
    cout<<"str = "<<str<<endl;   
}