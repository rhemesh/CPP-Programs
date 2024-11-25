#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str[10] = "Hemesh";

    int i=0;
    while(str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }

    cout<<"string  = "<<str<<endl;
}