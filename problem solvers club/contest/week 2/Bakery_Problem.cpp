#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    int sum1=x*100;
    int sum2=(x*60)+y;
    cout<<min(sum1,sum2);
}