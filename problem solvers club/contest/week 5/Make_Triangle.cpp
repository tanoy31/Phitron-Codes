#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        int x=a[0];
        int y=a[1];
        int z=a[2];
        if(x+y>z)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<(z-(x+y)+1) <<endl;
        }
    }
}