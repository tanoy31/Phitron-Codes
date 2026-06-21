#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    while(n!=0)
    {
        if(n>=5)
        {
            count+=n/5;
            n=n%5;
        }
        if(n>=4)
        {
            count+=n/4;
            n=n%4;
        }
        if(n>=3)
        {
            count+=n/3;
            n=n%3;
        }
        if(n>=2)
        {
            count+=n/2;
            n=n%2;
        }
        if(n>=1)
        {
            count+=n;
            n=0;
        }
    }
    cout<<count;
}