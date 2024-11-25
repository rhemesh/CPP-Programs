#include<iostream>

using namespace std;
void xstrcat(char *str1,const char* str2,int size)
{
    int i=0;
    while(str1[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(str2[j]!='\0' && i <= size-1)
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0';
}
int main()
{

    char str1[20];
    char str2[10];
    int size = sizeof(str1);
    cout<<"Enter string1"<<endl;
    cin.getline(str1,sizeof(str1));

    cout<<"Enter string2:"<<endl;
    cin.getline(str2,sizeof(str2));

    xstrcat(str1,str2,size);

    cout<<"After concatinating string = "<<str1<<endl;
}