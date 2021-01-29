#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
lli fun(lli n)
{
    int c=0;
    for(lli i=5;n/i>0;i*=5)
    {
        c+=n/i;
    }
    return c;
}
int main()
{
    lli n;
    cin>>n;
    cout<<fun(n);
    return 0;
}