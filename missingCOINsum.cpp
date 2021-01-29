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
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(k<a[i])
        break;
        else
        {
            k+=a[i];
        }
    }
    cout<<k;
    return 0;
}