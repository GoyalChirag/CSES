#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
int main()
{
    lli n;
    cin>>n;
    while(n--)
    {
        lli a,b;
        cin>>a>>b;
        if(a%b==2||b%a==2)
        cout<<"YES\n";
        else if(a%3==0&&b%3==0)
        cout<<"YES\n";
        else if((a%2==1&&b%2==0)||(a%2==0&&b%2==1))
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}