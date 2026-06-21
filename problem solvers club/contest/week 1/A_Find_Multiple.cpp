#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int i=1;
    bool flag=false;
    int x;
    while (1)
    {
        x=i*c;
        if(x>=a && x<=b)
        {
            cout<<x;
            flag=true;
            break;
        }
        if(x>b)
        {
            break;
        }
        i++;
    }
    if(!flag)
    {
        cout<<-1;
    }
}