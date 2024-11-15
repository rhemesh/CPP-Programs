#include<iostream>
#include<cstring>

using namespace std;

class String
{
    char *str;
    int size;
    public:

    String(const char *s = NULL);
    ~String()
    {
        delete[] str;
    }

    String(const String&);
    void print()
    {
        cout<<str<<endl;
    }
    void change(const char *);

};

String::String(const char *s)
{
    size = strlen(s);
    str = new char[size + 1];
    strcpy(str,s);
}// parameterized constructor
void String::change(const char *s)
{
    delete[] str;
    size = strlen(s);
    str = new char[size + 1];
    strcpy(str,s);
}

String::String(const String &obj)
{
    size = obj.size;
    str = new char[size + 1];
    strcpy(str,obj.str);
} //User defined copy constructor

int main()
{
    String s1("Hello");
    String s2(s1); //Deep copy

    s1.print();
    s2.print();

    s2.change("All");

    s1.print();
    s2.print();

    return 0;

}

//Here,If we try to change second object ie copied object then it will not reflect in obj one data because both object memories are stored seperate in deep copy/user defined copy constructor


