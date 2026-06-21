#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>s;
        for(int i=1;i<=n;i++)
        {
            s.insert(i);
        }
        int x=n-1;
        vector<pair<int,int>>ans;
        while(x--)
        {
            auto it=s.rbegin();
            int a=*it;
            it++;
            int b=*it;
            ans.push_back({a,b});
            int c=round((a+b)/2.0);
            s.erase(a);
            s.erase(b);
            s.insert(c);
        }
        cout<<*s.begin()<<endl;
        for(auto[a,b]:ans)
        {
            cout<<a<<" "<<b<<endl;
        }
    }
}