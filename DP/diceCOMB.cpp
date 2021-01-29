#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
lli fun(lli n)
{
    lli dp[n+1]={0};
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(j>i)
            continue;
            dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
        }
    }
    return dp[n]%mod;
}
int main()
{
    lli n;
    cin>>n;
    cout<<fun(n);
    return 0;
}