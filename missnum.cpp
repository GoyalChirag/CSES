#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
int main() 
{
    ll n,sum=0;
    cin>>n;
    ll t= n*(n+1)/2;
    ll a;
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        sum+=a;
    }
    cout<<t-sum;
    return 0;
} 