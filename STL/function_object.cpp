#include<iostream>
using namespace std;

class func_object
{
    public:
    int operator()(int x,int y)
    {
        return x-y;
    }
};
int main()
{
    func_object obj;
    int sub = obj(12,5);
    cout<<"res = "<<sub;
}