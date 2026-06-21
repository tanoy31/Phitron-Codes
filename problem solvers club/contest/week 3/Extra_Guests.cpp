#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin>>x>>y;
    int z=y-x;
    int sum1=x*100;
    int sum2=z*150;
    int total=sum1+sum2;
    cout<<total<<"\n";
}