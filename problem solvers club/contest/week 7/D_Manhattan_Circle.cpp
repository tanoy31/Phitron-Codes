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
        int n,m;
        cin>>n>>m;
        char c[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>c[i][j];
            }
        }
        int col,row;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(c[i][j]=='#')
                {
                    col=j+1;
                    break;
                }
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(c[j][i]=='#')
                {
                    row=j+1;
                    break;
                }
                
            }
        }
        cout<<row<<" "<<col<<endl;
    }
}