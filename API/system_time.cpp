#include<windows.h>
#include<iostream>

using namespace std;

int main()
{
    SYSTEMTIME time;

    GetSystemTime(&time);

    cout<<"system time : "<<time.wHour<<":"<<time.wMinute<<":"<<time.wSecond<<endl;
}