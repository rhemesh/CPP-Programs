#include<iostream>

using namespace std;

void xtoupper(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]= str[i] - 32;
        }
        i++;
    }
}
int main()
{
    char str[] = "hemesh";

    xtoupper(str);

    cout<<"string after converting to uppercase = "<<str<<endl;
}