#include<iostream>

using namespace std;
void eliminate_multiple_spaces(char *str,int size)
{
    int i=0;
    int j=0;
    bool space_found = false;
    while(str[i]!='\0' && i<size)
    {
        if(str[i] ==' ')
        {
            if(!space_found)
            {
                str[j++] = str[i];
                space_found = true;
            }    
        }
        else{
            str[j++] = str[i];
            space_found = false;
        }
        i++;
    }

    //checking trailing spaces
    if(j>0 && str[j-1] == ' ')
    {
        str[j-1] = '\0';
    }

    str[j] = '\0';
}
int main()
{
    char str[20];
    cout<<"Enter the string:"<<endl;
    cin.getline(str,sizeof(str));
    int size = sizeof(str);
    eliminate_multiple_spaces(str,size);

    cout<<"After eliminating multiple spaces str = "<<str<<endl;

}