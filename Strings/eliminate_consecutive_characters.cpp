#include<iostream>

using namespace std;


void eliminate_consecutive_char(char *str,int size)
{
    int i=1;
    int j=0;
    while(str[i]!='\0' && i<size)
    {
        if(str[i]!=str[j])
        {
            j++;
            str[j] = str[i];
        }
        i++;
    }
    str[j+1] = '\0';
}
int main()
{
    char str[20];
    cout<<"Enter the string:"<<endl;
    cin.getline(str,sizeof(str));
    int size = sizeof(str);
    eliminate_consecutive_char(str,size);

    cout<<"After eliminating consecutive elements str = :"<<str<<endl;
}