#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    tuple<string,int,string>student[5];
    for(int i=0;i<5;i++)
    {
        cin>>get<0>(student[i])>>get<1>(student[i])>>get<2>(student[i]);
    }
    for(auto [x,y,z]:student)
    {
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
}