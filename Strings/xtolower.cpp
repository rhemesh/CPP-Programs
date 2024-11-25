#include<iostream>

using namespace std;

void xtolower(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i] >=65 && str[i]<=90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
}
int main()
{
    char str[] = "hemesh";

    xtolower(str);

    cout<<"After converting to lowercase string = "<<str<<endl;

}