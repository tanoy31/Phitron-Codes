#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    map<long long,long long>mp;
    for(long long i=0;i<n;i++)
    {
        long long value;
        cin>>value;
        mp[value]+=(i+1);
    }
    for(auto x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
}