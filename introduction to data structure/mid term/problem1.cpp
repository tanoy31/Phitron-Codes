#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int x=n;
    int y=m;
    stack<int>st;
    queue<int>qe;
    int val;
    int f=0;
    while(n--)
    {
        cin>>val;
        st.push(val);
    }
    while(m--)
    {
        cin>>val;
        qe.push(val);
    }
    if(x!=y)
    {
        cout<< "NO";
    }
    else
    {
        while (x--)
        {
            int a=st.top();
            int b=qe.front();
            if(a!=b)
            {
                f++;
                break;
            }
            st.pop();
            qe.pop();
        }
        if(f==0)
        {
            cout<< "YES";
        }
        else
        {
            cout<< "NO";
        }
    }
}