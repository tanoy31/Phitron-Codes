#include<bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
vector<pair<int,int>>d={{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
int level[105][105];

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
            if(valid(ci,cj)==true && vis[ci][cj]==false)
            {
                q.push({ci,cj});
                vis[ci][cj]=true;
                level[ci][cj]=level[pair_i][pair_j]+1;
            }
        }
    }
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));
    memset(level,-1,sizeof(level));
    int si,sj,di,dj;
    cin>>si>>sj>>di>>dj;
    bfs(si,sj);
    cout<< "shortest destination : "<<level[di][dj];
}