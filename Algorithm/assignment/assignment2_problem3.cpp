#include<bits/stdc++.h>
using namespace std;

int par[1000000];
int group_size[10000000];

int find(int lead)
{
    if(par[lead]==-1)
    {
        return lead;
    }
    int x=find(par[lead]);
    par[lead]=x;
    return x;
}

void dsu_union(int node1,int node2)
{
    int leader1=find(node1);
    int leader2=find(node2);
    if(group_size[leader1]>=group_size[leader2])
    {
        par[leader2]=leader1;
        group_size[leader1]+=group_size[leader2];
    }
    else
    {
        par[leader1]=leader2;
        group_size[leader2]+=group_size[leader1];
    }
}

int main()
{
    memset(par,-1,sizeof(par));
    int n,e;
    cin>>n>>e;
    for(int i=1;i<n;i++)
    {
        group_size[i]=1;
    }
    int count=0;
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leader1=find(a);
        int leader2=find(b);
        if(leader1==leader2)
        {
            count++;
        }
        else
        {
            dsu_union(a,b);
        }
    }
    cout<<count;
}