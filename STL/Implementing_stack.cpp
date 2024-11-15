#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"top = "<<st.top()<<endl;
    st.push(50);
    st.push(60);
    cout<<"Total number of elements = "<<st.size()<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }

}