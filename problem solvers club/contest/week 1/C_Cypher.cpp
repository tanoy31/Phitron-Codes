#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            int b;
            string s;
            cin>>b>>s;
            for(int j=0;j<b;j++)
            {
                if(s[j]=='D')
                {
                    arr[i]++;
                    if(arr[i] > 9)
                    {
                        arr[i] =0;
                    } 
                }
                else 
                {
                    arr[i]--;
                    if(arr[i] < 0) 
                    {
                        arr[i] = 9;
                    }
                }
            }
        }
        for(auto x : arr)
        {
            cout << x << " ";
        }    
        cout << endl;
    }
}