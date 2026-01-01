#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6,7,8,9,10};
    int x;
    cin>>x;
    auto it=find(v.begin(),v.end(),x);
    if(it==v.end())
    {
        cout<< "Not found";
    }
    else
    {
        cout<<"Found";
    }
}