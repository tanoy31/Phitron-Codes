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
        deque<int>dq;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            dq.push_back(x);
        }
        long long army=0;
        priority_queue<int>bonus;
        for(int i=0;i<n;i++)
        {
            int x=dq[i];
            if(x>0)
            {
                bonus.push(x);
            }
            if(x==0)
            {
                if(!bonus.empty())
                {
                    army+=bonus.top();
                    bonus.pop();
                }
            }
        }
        cout<<army<<endl;
    }
}