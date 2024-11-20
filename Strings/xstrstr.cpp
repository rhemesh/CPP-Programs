#include<iostream>

using namespace std;
bool xstrstr(string str,string substr)
{
    bool isfound = false;
    int i,j;
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;substr[j]!='\0';j++)
        {
            if(str[i+j]!=substr[j])
            {
                break;
            }
        }
        if(substr[j] == '\0')
        {
            isfound = true;
            break;
        }
    }
    return isfound;
}
int main()
{
    string str;
    string substr;
    cout<<"Enter the string:"<<endl;
    cin>>str;
    cout<<"Enter substring:"<<endl;
    cin>>substr;

    bool res = xstrstr(str,substr);
    if(res)
    {
        cout<<"substring found in main string";
    }
    else{
        cout<<"Not found";
    }

}