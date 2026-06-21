#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    deque<string>dq;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        auto it=find(dq.begin(),dq.end(),s);
        if(it==dq.end())
        {
            dq.push_front(s);
        }
        else
        {
            dq.erase(it);
            dq.push_front(s);
        }
    }
    for(auto s:dq)
    {
        cout<<s<<endl;
    }
}