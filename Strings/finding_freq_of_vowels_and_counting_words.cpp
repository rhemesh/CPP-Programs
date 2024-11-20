#include<iostream>

using namespace std;

int main()
{
    string str;
    cout<<"Enter the string:"<<endl;
    getline(cin,str);
    
    cout<<"Finding vowels frequency:"<<endl;
    int i=0;
    int count[5] = {0};
    int isword = 0;
    int word_count = 0;
    while(str[i]!='\0')
    {
        switch (str[i])
        {
        case 'a': case 'A':count[0]++;
            break;
        case 'e': case 'E':count[1]++;
            break;
        case 'i': case 'I':count[2]++;
            break;
        case 'o': case 'O':count[3]++;
            break;
        case 'u': case 'U':count[4]++;
            break;
        default:
            break;
        }

        if(str[i]!=' ' && str[i] != '\n' && str[i] !='\t')
        {
            if(isword ==0)
            {
                isword =1;
                word_count++;
            }
        }
        else{
            isword = 0;
        }
        i++;

    }
    char vowels[5] = {'a','e','i','o','u'};
    for(int i=0;i<5;i++)
    {
        cout<<vowels[i]<<"/"<<(char)(vowels[i] - 32)<<" = "<<count[i]<<"times"<<endl;
    }

    cout<<"Total words in an string = "<<word_count<<endl;

}