#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    deque<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans1=0,ans2=0,who=1;
    while(!a.empty())
    {
        int left=a.front(),right=a.back();
        int mx=max(left,right);
        if(who % 2 !=0)
        {
            ans1+=mx;
        }
        else
        {
            ans2+=mx;
        }
        if(left > right)
            a.pop_front();
        else
            a.pop_back();
        who++;
    }
    cout<<ans1<<" "<<ans2;
}