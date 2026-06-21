#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int sum=0,ans=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(j==i+1){
                    sum=a[i]+(a[j]/2);
                }
                else{
                    sum=a[i]+a[j];
                }
                ans=min(sum,ans);
            }
        }
        cout<<ans<<endl;
    }
}