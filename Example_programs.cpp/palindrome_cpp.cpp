#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

string generating_palindrome(const string &S)
{
    int len = S.length();
    int freq[52] = {0};

    for(int i=0;i<len;i++)
    {
        int ch = S[i];
        if(ch>='a' && ch<='z')
        {
            freq[ch - 'a']++;
        }   
        else{
            if(ch>='A' && ch<= 'Z')
            {
                freq[ch - 'A' +26];
            }
        }
    }

    string leftstr = "";
    char midllechar = '\0';
    for(int i=0;i<52;i++)
    {
        char ch;
        if(i<26)
            ch = 'a' +  i;
        else
            ch = 'A' + (i -26);
            
        int count = freq[i];

        for(int j=0;j<count/2;j++)
        {
            leftstr +=ch;
        }

        if(count%2==1 && midllechar =='\0')
        {
            midllechar = ch;
        }
    }

    string rightstr = leftstr;
    reverse(rightstr.begin(),rightstr.end());

    string palindrome = leftstr;
    if(midllechar != '\0')
    {
        palindrome += midllechar;
    }
    palindrome +=rightstr;

    return palindrome;
}

int main()
{
    string str;
    cout<<"Enter string to find palindrome:"<<endl;
    cin>>str;
    cout<<generating_palindrome(str)<<endl;
}
