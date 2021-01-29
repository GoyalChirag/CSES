#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
lli fun(lli n)
{
    lli i,res=1;
    for(i=1;i<=n;i++)
    {
        res*=2;
        res=res%mod;
    }
    return res;
}
int main()
{
    lli n;
    cin>>n;
    cout<<fun(n);
    return 0;
}