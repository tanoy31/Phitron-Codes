#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int x = 0;
        int mn = 0;

        for(char c : s)
        {
            if(c == '<') x++;
            else x--;

            mn = min(mn, x);
        }

        // leftover depends on how much imbalance remains
        cout << abs(x) << "\n";
    }
}