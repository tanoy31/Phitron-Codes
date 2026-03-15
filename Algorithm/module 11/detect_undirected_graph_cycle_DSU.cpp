#include<bits/stdc++.h>
using namespace std;

int par[1005];
int group_size[1005];

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
    memset(group_size,1,sizeof(group_size));
    bool cycle=false; 

    int n,e;
    cin>>n>>e;

    while(e--)
    {
        int a,b;
        cin>>a>>b;
        int leader1=find(a);
        int leader2=find(b);
        if(leader1==leader2)
        {
            cycle=true;
        }
        else
        {
            dsu_union(a,b);
        }
    }
    if(cycle)
    {
        cout<< "Cycle detected";
    }
    else
    {
        cout<< "No cycle detected";
    }
}