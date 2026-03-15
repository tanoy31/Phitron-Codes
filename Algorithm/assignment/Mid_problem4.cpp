#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
pair<int,int> parent[1005][1005];
int n,m,si,sj,di,dj;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};

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

void bfs(int si,int sj)
{
    queue<pair<int,int>>q;
    q.push({si,sj});
    vis[si][sj]=true;
    level[si][sj]=0;
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
            if(valid(ci,cj)==true && vis[ci][cj]==false && grid[ci][cj]!='#')
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                level[ci][cj]=level[pair_i][pair_j]+1;
                parent[ci][cj]={pair_i,pair_j};
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(grid[i][j]=='R')
            {
                si=i;
                sj=j;
            }
            if(grid[i][j]=='D')
            {
                di=i;
                dj=j;
            }
        }
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    memset(parent,-1,sizeof(parent));
    
    bfs(si,sj);
    if(vis[di][dj]==1)
    {
        int r=di;
        int c=dj;
        while(true)
        {
            pair<int,int>p=parent[r][c];
            r=p.first;
            c=p.second;
            if(grid[r][c]=='R')
            {
                break;
            }
            grid[r][c]='X';
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<grid[i][j];
            }
            cout<<endl;
        }
    }
}