#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)               //O(n)
    {
        for(int i=1;i<=m;i++)           //O(m)
        {
            cout<< "hello"<<endl;           //overall complexity O(n*m)
        }
    }
    
}