#include<iostream>
#include<cstring>

using namespace std;

class String
{
    char *s;
    int size;
    public:
    String(const char *str = NULL);
    ~String()
    {
        cout<<"Destructor Invoked"<<endl;
        delete[] s;
    }
    void print()
    {
        cout<<s<<endl;
    }
    void change(const char *);
    

};

String::String(const char *str)
{
    cout<<"Inside constructor"<<endl;
    size = strlen(str);
    s = new char[size + 1];
    strcpy(s,str);
}

void String::change(const char *str)
{
    cout<<"Inside change function"<<endl;
    delete []s;
    size = strlen(str);
    s = new char[size +1];
    strcpy(s,str);
}

int main()
{
    String str1("Hemesh");
    String str2 = str1; //shallow copy

    str1.print();
    str2.print();

    str2.change("name");

    str1.print();
    str2.print();
}

//Here we are making use of strings and strcpy and  making using shallow copy to copy the object
//If we are trying to change second object str2 string it is getting reflecting for first object data because in shallow copy all the objects will be stored in the same memory. 