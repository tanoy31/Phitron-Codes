#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    multiset<int>ml;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }
    int count=0,problem=1;
    while (!ml.empty())
    {
        auto it=ml.lower_bound(problem);
        if(it != ml.end())
        {
            count++;
            ml.erase(it);
        }
        else
        {
            break;
        }
        problem++;
    }
    cout<<count;
}