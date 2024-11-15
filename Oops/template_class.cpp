#include<iostream>

using namespace std;

template<class t>
class test
{
    t x;
    public:
    test(t a)
    {
        x = a;
    }
    void show()
    {
        cout<<"x  = "<<x<<endl;
    }
};

int main()
{
    test<int> obj(10);
    test<double> obj1(10.45234);
    test<float> obj2(23.45);
    test<char> obj3('H');
    obj.show();
    obj1.show();
    obj2.show();
    obj3.show();

    return 0;

}