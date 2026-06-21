#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int c1,c2,c3;
    if(x>2)
    {
        c1=x+x-1;
    }
    if(y>2)
    {
        c2=y+y-1;
    }
    if(x>1 && y>1)
    {
        c3=x+y;
    }
    cout<<max(c1,max(c2,c3));
}