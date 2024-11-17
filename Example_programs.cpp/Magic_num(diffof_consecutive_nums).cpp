#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int magixmaxnum(string &n)
{
    int len = n.length();
    vector<int> diff(len - 1);

    for(int i=0;i<len-1;i++)
    {
        diff[i] = n[i] - n[i+1];
    }

    int current_sum = diff[0];
    int max_sum = diff[0];

    for(int i=1;i<diff.size();i++)
    {
        current_sum = max(diff[i],diff[i] + current_sum);
        max_sum = max(max_sum,current_sum);
    }
    return max_sum;
}

int main()
{
    string S;
    cout<<"Enter the string:"<<endl;
    getline(cin,S);

    int res = magixmaxnum(S);
    cout<<"RES = "<<res<<endl;
}