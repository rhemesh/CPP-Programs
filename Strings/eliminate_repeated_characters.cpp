#include<iostream>
#include<cstring>

using namespace std;
void eliminate_repeated_char(char *str,int size)
{
    int k = 0;
    int length = strlen(str);
    for(int i=0;i<length && i < size;i++)
    {
        bool duplicate = false;
        for(int j=0;j<i;j++)
        {
            if(str[i] == str[j])
            {
                duplicate =true;
                break;
            }
        }
        if(!duplicate)
        {
            str[k] = str[i];
            k++;
        }
    }
    str[k] = '\0';
}
int main()
{
    char str[20];
    cout<<"Enter the string:"<<endl;
    cin.getline(str,sizeof(str));
    int size = sizeof(str);
    eliminate_repeated_char(str,size);

    cout<<"After eliminating repeated characters str = :"<<str<<endl;
}