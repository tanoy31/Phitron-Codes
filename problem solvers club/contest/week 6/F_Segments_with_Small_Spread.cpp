#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long k;
    cin>>n>>k;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int l=0,r=0;
    long long ans=0;
    multiset<long long>ml;
    while(r<n)
    {
        ml.insert(a[r]);
        auto max_it =ml.rbegin();
        auto min_it = ml.begin();
        if(*max_it - *min_it <= k)
        {
            ans += (r - l + 1);
        }
        else
        {
            while(l<=r)
            {
                auto max_it =ml.rbegin();
                auto min_it = ml.begin();
                if(*max_it - *min_it <= k)
                {
                    ans += (r - l + 1);
                    break;
                }
                else
                {
                    ml.erase(ml.find(a[l]));
                    l++;
                }
            }
        }
        r++;
    }
    cout<<ans; 
}