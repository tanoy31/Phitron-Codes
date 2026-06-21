#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    vector<int>ans;
    queue<int>chk;
    while(r<n)
    {
        if(a[r]<0)
        {
            chk.push(a[r]);
        }
        if(r-l+1==k)
        {
            if(!chk.empty())
            {
                ans.push_back(chk.front());
                if(a[l]==chk.front())
                {
                    chk.pop();
                }
            }
            else
            {
                ans.push_back(0);
            }
            l++,r++;
        }
        else
        {
            r++;
        }
    }
    for(auto x:ans)
    {
        cout<<x<<" ";
    }
}