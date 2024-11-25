#include<iostream>

using namespace std;

void xstrcpy(const char *src,char *des)
{
    int i=0;
    while(src[i]!='\0')
    {
        des[i] = src[i];
        i++;
    }
    des[i] = '\0';
}
int main()
{
    char str1[20];
    char str2[20];
    cout<<"enter string1:"<<endl;
    cin.getline(str1,sizeof(str1));

    xstrcpy(str1,str2);

    cout<<"After copying str2 = "<<str2<<endl;
}