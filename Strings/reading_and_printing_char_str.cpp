#include<iostream>

using namespace std;

int main()
{
    char str[10];
    cout<<"Enter the string:"<<"\n";
    //cin>>str;  //this reads till the space if we give hello world it only takes hello
    cin.get(str,9);  //This get funtion will read string including spaces we need to specify the var and size.
    cout<<"str = "<<str;
}
