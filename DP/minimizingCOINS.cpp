#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
lli fun(lli s,lli n,lli a[])
{
    vector<lli> dp(n+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(a[j]>i) continue;
            dp[i] = min(dp[i],1+dp[i-a[j]]);
        }
    }
    if(dp[n]==INT_MAX)
    return -1;
    return dp[n];
}
int main()
{
    lli s,n,i;
    cin>>s>>n;
    lli a[s];
    for(i=0;i<s;i++)
    cin>>a[i];
    cout<<fun(s,n,a);
    return 0;
}