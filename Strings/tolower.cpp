#include<iostream>

using namespace std;

int main()
{
    char str[] = "HEMESH";

    int i=0;
    while(str[i]!='\0')
    {
        str[i] = tolower(str[i]);
        i++;
    }

    cout<<"After conversion to lower string = "<<str<<endl;

    return 0;

}