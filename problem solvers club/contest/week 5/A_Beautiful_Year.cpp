#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin>>x;
    x++;
    while(true)
    {
        bool flag=false;
        int a[4];
        int i=0;
        int n=x;
        while(n>0)
        {
            a[i]=n%10;
            n=n/10;
            i++;
        }
        sort(a,a+4);
        for(i=0;i<3;i++)
        {
            if(a[i]==a[i+1])
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            x++;
        }
        else
        {
            cout<<x;
            break;
        }
    }
}