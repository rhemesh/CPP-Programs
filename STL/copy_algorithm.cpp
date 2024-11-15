#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int nums[] = {1,2,3,4,5,6,7,8};
    vector<int> vec(8);
    copy(nums,nums+8,vec.begin());
    vector<int>::iterator i = vec.begin();
    for(i;i!=vec.end();i++)
    {
        cout<<*i<<endl;
    }

    return 0;

}

//copying numbers from nums array to vector and printing using iterators