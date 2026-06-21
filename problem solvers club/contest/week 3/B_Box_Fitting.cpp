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
        int n,w;
        cin>>n>>w;
        multiset<int>ms;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            ms.insert(x);
        }
        int h=0;
        while(!ms.empty())
        {
            int cap=w;
            while(cap !=0 && !ms.empty())
            {
                auto it=ms.upper_bound(cap);
                if(it==ms.begin())
                {
                    break;
                }
                it--;
                cap-=*it;
                ms.erase(it);
            }
            h++;
        }
        cout<<h<<endl;
    }
}