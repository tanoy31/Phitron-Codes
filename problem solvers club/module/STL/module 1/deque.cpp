#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    deque<int>dq;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        dq.push_back(y);
    }
    dq.push_front(20);
    dq.push_back(30);
    for(auto x: dq)
    {
        cout<<x<<" ";
    }
    dq.pop_front();
    cout<<endl;
    for(auto x: dq)
    {
        cout<<x<<" ";
    }
}