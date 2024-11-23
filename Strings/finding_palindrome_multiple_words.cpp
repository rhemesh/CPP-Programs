#include<iostream>
#include<cstring>

using namespace std;
bool findpalindrome(char *str,int len)
{
    for(int i=0;i<len/2;i++)
    {
        if(str[i] != str[len-i-1])
        {
            return false;
        }
    }
    return true;

}

int countnumberofpalindromes(const char* str,int len)
{
    int count = 0;
    char word[20] = {0};
    int j = 0;
    for(int i=0;i<=len;i++)
    {
        if(str[i] !=' ' && str[i] != '\0')
        {
            word[j++] = str[i];
        }
        else 
        {
            if(j>0)
            {
                word[j] = '\0';
                if(findpalindrome(word,strlen(word)))
                {
                    count++;
                }
                j = 0;
            }
        }
    }
    return count;
}


int main()
{

    char str[20];

    cout<<"enter the string to find palindrome:"<<endl;
    cin.getline(str,sizeof(str));

    int count = countnumberofpalindromes(str,strlen(str));

    cout<<"count = "<<count<<endl;

}

