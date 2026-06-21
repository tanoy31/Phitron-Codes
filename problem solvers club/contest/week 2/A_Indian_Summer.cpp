#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    set<pair<string,string>> st;
    while(t--)
    {
        string x, y;
        cin >> x >> y;
        st.insert({x, y}); 
    }
    cout << st.size();
}