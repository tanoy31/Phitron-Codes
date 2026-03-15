#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,e;
    cin>>n>>e;
    vector<long long>adj_list[1005];
    while (e--)
    {
        long long a,b;
        cin>>a>>b;
        adj_list[a].push_back(b);
    }
    long long q;
    cin>>q;
    while(q--)
    {
        long long x,y;
        cin>>x>>y;
        int f=0;
        if(x==y)
        {
            cout<< "YES"<<endl;
        }
        else
        {
            for(int k:adj_list[x])
            {
                if(k==y)
                {
                    f++;
                    break;
                }
            }
            if(f==0)
            {
                cout<< "NO"<<endl;
            }
            else
            {
                cout<< "YES"<<endl;
            }
        }
    }
}