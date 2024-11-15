#include<iostream>
#include<chrono>

//#define square(x) (x) * (x)

using namespace std;
using namespace std::chrono;

inline int square(int x)
{
    return x * x;
}
int main()
{
    int x = 5;
    auto startTime = high_resolution_clock::now();
    cout<<"Square = "<<square(x+3);

    auto stopTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds> (stopTime - startTime);
    cout<<"Seconds :"<<duration.count()/1000000<<endl;

    return 0;

}

//If we are using inline then the function will not go overhead,It evaluate the function defination where the function is called
//Here,We saw the difference between macro and inline,Macro will not evaluate the arguments it only substitutes but inline will evaluate and substitutes 