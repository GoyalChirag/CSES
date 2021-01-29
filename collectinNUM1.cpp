#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
int main()
{
    int n;
    cin>>n;
    lli a[n];
    lli k=1;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        a[i]=(a[i]-i-1)%mod;
    }
    cout<<*max_element(a,a+n)+1;
    return 0;
}