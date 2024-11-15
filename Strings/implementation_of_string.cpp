#include<iostream>

using namespace std;

int main()
{
    string str1 = "Hemesh";
    string str2 = " R";

    string str3,str4;

    int len;
    len = str1.size();
    cout<<"The length of the string 1 is : "<<len<<endl;
    
    cout<<"Copying a string from str1 to str3:"<<endl;
    str3 = str1;
    cout<<"After copying str3 = "<<str3<<endl;
    cout<<"concating strings:"<<endl;
    str4  = str1 + str2;
    cout<<"After concatination strings str4 = "<<str4<<endl;

    return 0;

}