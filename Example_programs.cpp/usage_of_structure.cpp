#include<iostream>

using namespace std;

struct student
{
    char name[20];
    int age;
    char course[20];
}s[10];

int main()
{
    int num;
    cout<<"enter the number of students:"<<endl;
    cin>>num;
    
    for(int i=0;i<num;i++)
    {
        cout<<"enter the details of student"<<i+1<<endl;
        cout<<"enter name:"<<endl;
        cin>>s[i].name;
        cout<<"enter age of the student:"<<endl;
        cin>>s[i].age;
        cout<<"Enter the course:"<<endl;
        cin>>s[i].course;
    }

    cout<<"Student detailes are:"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<"Student"<<i+1<<endl;
        cout<<"name = "<<s[i].name<<endl;
        cout<<"age = "<<s[i].age<<endl;
        cout<<"course choosen = "<<s[i].course<<endl;
    }

    return 0;

}