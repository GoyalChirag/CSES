#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
lli fun(lli s,lli n,lli a[])
{
    lli dp[n+1]={0};
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(a[j]>i) continue;
            dp[i]=(dp[i]+dp[i-a[j]])%mod;
        }
    }
    return dp[n]%mod;
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