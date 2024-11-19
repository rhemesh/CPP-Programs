#include<iostream>

using namespace std;

int n;
int &func()
{
    return n;
}

int main()
{
    func() = 5;

    cout<<"n = "<<n;

}
