#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int arr[7];
        for(int i=0;i<7;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+7,greater<int>());
        int sum=arr[0];
        for(int i=1;i<7;i++)
        {
            sum+=(-1*arr[i]);
        }
        cout<<sum<<endl;
    }
}