#include<bits/stdc++.h>
using namespace std;
long long GCD(long long a,long long b)
{
    return __gcd(a,b);
}
long long LCM(long long a,long long b)
{
    return (a/__gcd(a,b))*b;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    int count1=n/a;
    int count2=n/b;
    int count3=n/LCM(a,b);
    count1-=count3;
    count2-=count3;
    long long ans=(count1*p)+ (count2*q)+(count3*max(p,q));
    cout<<ans;
}