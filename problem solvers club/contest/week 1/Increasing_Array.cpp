#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long count =0;
    for(long long i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            count +=(a[i] - a[i+1]);
            a[i+1] = a[i];
        }
    }
    cout<<count;
}