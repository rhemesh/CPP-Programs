#include<iostream>

using namespace std;

int xstrcmp(const char *str1,const char *str2)
{
    int i=0;
    while(str1[i]!= '\0' && str2[i]!='\0')
    {
        if(str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    return (str1[i] - str2[i]);
}

int main()
{
    char str1[20];
    char str2[20];

    cout<<"Enter string1"<<endl;
    cin.getline(str1,sizeof(str1));

    cout<<"Enter string2:"<<endl;
    cin.getline(str2,sizeof(str2));

    int res = xstrcmp(str1,str2);

    if(res == 0)
    {
        cout<<"strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are not equal"<<endl;
    }

    return 0;

}