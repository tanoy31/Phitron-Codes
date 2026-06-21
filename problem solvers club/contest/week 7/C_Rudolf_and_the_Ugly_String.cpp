#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string s1="pie";
        string s2="map";
        string s3="mapie";
        int c1=0,c2=0,c3=0;
        for(int i=0;i<n;i++)
        {
            string x=s.substr(i,3);
            if(x==s1)
            {
                c1++;
            }
            else if(x==s2)
            {
                c2++;
            }
        }
        for(int i=0;i<n;i++)
        {
            string x=s.substr(i,5);
            if(x==s3)
            {
                c3++;
            }
        }
        cout<<c3+(c1-c3)+(c2-c3)<<endl;
    }
}