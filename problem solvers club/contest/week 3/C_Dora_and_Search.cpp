#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
        {
            cin >>a[i];
        } 
        bool found=false;
        int left=0,right=0;
        int i=1,j=n;
        int mx=n;
        int mn=1;
        while(i<j)
        {
            if(a[i]!=mx && a[i]!=mn && a[j]!=mx && a[j]!=mn)
            {
                found=true;
                left=i;
                right=j;
                break;
            }
            int x=i;
            int y=j;
            if(a[i]==mn||a[i]==mx)
            {
                i++;
            }
            if(a[j]==mn||a[j]==mx)
            {
                j--;
            }
            if(a[x]==mx || a[y]==mx)
            {
                mx--;
            }
            if(a[x]==mn || a[y]==mn)
            {
                mn++;
            }
        }
        if(found)
        {
            cout<<left<<" "<<right<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}