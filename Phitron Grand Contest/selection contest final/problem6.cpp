#include<bits/stdc++.h>
using namespace std;

int val[1005],weight[1005];
int dp[1005][1005][1005];

int knapsack(int i,int max_weight,int max_items)
{
    if(i < 0 || max_weight <= 0 || max_items <= 0)
    {
        return 0;
    }
    if(dp[i][max_weight][max_items] != -1)
    {
        return dp[i][max_weight][max_items];
    }
    if(weight[i] <= max_weight)
    {
        int op1 = knapsack(i-1, max_weight - weight[i], max_items - 1) + val[i];
        int op2 = knapsack(i-1, max_weight, max_items);
        dp[i][max_weight][max_items] = max(op1, op2);
        return dp[i][max_weight][max_items];
    }
    else
    {
        dp[i][max_weight][max_items] = knapsack(i-1, max_weight, max_items);
        return dp[i][max_weight][max_items];
    }
}

int main()
{
    int n,k,w;
    cin>>n>>k>>w;
    for(int i=0;i<n;i++)
    {
        cin>>val[i];
    }
    for(int i=0;i<n;i++)
    {
        weight[i]=i+1;
    }
    memset(dp,-1,sizeof(dp));
    cout << knapsack(n-1,w,k);
}