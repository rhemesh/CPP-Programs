#include<iostream>

using namespace std;
int xstrlen(char *str)
{
    int length = 0;
    while(str[length]!='\0')
    {
        length++;
    }


    return length;
}
int main()
{
    char *str = new char[10];
    cout<<"enter the string:"<<endl;
    cin.getline(str,10);

    cout<<"string length = "<<xstrlen(str);
    delete str;

}