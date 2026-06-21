#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    multiset<int>st;
    for(int i=1;i<=3;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    int mx=*st.rbegin();
    int mn=*st.begin();
    if(mx-mn>=10)
    {
        cout<<"check again";
    }
    else
    {
        int z=*++st.begin();
        cout<<"final "<<z;
    }
}