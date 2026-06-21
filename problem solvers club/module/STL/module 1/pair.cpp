#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    pair<string,int>student[5];
    for(int i=0;i<5;i++)
    {
        cin>>student[i].first>>student[i].second;
    }
    for(auto [x,y]:student)
    {
        cout<<x<<" "<<y<<endl;
    }
}