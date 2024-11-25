#include<iostream>

using namespace std;
char *xstrchr(char *str,char c)
{
    int i=0;
    
    while(str[i]!='\0')
    {
        if(str[i] == c)
        {
            return (str + i);
        }
        i++;
    }
    return 0;
    
}
int main()
{
    char str[10];
    cout<<"enter string:"<<endl;
    cin.getline(str,sizeof(str));
    
    char ch;
    cout<<"enter the character:"<<endl;
    cin>>ch;
    char *res = xstrchr(str,ch);
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