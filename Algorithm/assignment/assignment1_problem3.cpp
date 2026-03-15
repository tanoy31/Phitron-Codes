#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
int si,sj,di,dj;

bool valid(int i,int j)
{
    if(i<0 || i>=n || j<0 || j>=m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    while(!q.empty())
    {
        pair<int,int>par=q.front();
        q.pop();
        int pair_i=par.first;
        int pair_j=par.second;
        for(int i=0;i<4;i++)
        {
            int ci=pair_i+d[i].first;
            int cj=pair_j+d[i].second;
            if(valid(ci,cj)==true && vis[ci][cj]==false &&(grid[ci][cj]=='.'|| grid[ci][cj]=='B'))
            {
                if(ci==di && cj==dj)
                {
                    return true;
                }
                q.push({ci,cj});
                vis[ci][cj]=true;
            }
        }
    }
    return false;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
            if(grid[i][j]=='A')
            {
                si=i;
                sj=j;
            }
            if(grid[i][j]=='B')
            {
                di=i;
                dj=j;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    bool x=bfs(si,sj);
    if(x)
    {
        cout<< "YES";
    }
    else
    {
        cout<< "NO";
    }
}