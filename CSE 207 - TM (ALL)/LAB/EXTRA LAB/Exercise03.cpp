#include<iostream>
#include<stack>
#include "headerFile.h"
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    cout<<"The reverse value is: "<<endl;
    while(!st .empty())
    {

        cout<<st.top()<<endl;
        st.pop();

    }
    cout<<endl;

}
