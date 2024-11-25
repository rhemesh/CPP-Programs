#include<iostream>

using namespace std;

void str_swap(char **str1,char **str2)
{
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
    cout<<"After swapping strings inside function: "<<endl;
    cout<<"str1 = "<<*str1<<" "<<"str2 = "<<*str2<<endl;

}
int main()
{
    char str1[20];
    char str2[10];
    int size = sizeof(str1);
    cout<<"Enter string1"<<endl;
    cin.getline(str1,sizeof(str1));

    cout<<"Enter string2:"<<endl;
    cin.getline(str2,sizeof(str2));

    char *ptr1 = str1;
    char *ptr2 = str2;

    str_swap(&ptr1,&ptr2);

    cout<<"After swapping strings : "<<endl;
    cout<<"str1 = "<<ptr1<<" "<<"str2 = "<<ptr2<<endl;
}
