#include<bits/stdc++.h>
using namespace std;
int leader[1005];

int find(int lead)
{
    if(leader[lead]==-1)
    {
        return lead;
    }
    int x=find(leader[lead]);
    return x;
}

int main()
{
    memset(leader,-1,sizeof(leader));
    leader[0]=1;
    leader[1]=-1;
    leader[2]=1;
    leader[3]=1;
    leader[4]=5;
    leader[5]=3;

    cout<< find(4);
}