#include<iostream>

using namespace std;

void func(int x,int y)
{
    cout<< x*y<<endl;
}

int main()
{
    void (*func_pointer)(int,int) = func;

    func(25,30);

}
