#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n,x;
    cin>>n>>x;
    vector<pair<long long,long long>>a(n);
    for (long long i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second=i+1; 
    }
    sort(a.begin(),a.end());
    for (long long i=0;i<n;i++) 
    {
        long long l=i+1;
        long long r=n-1;
        while(l<r)
        {
            long long sum=a[i].first+a[l].first+a[r].first;
            if (sum==x)
            {
                cout<<a[l].second <<" "<<a[r].second<<" "<<a[i].second ;
                return 0;
            }
            if (sum<x)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
    }
    cout<<"IMPOSSIBLE";
}