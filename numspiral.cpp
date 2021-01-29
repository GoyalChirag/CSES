#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>y>>x;
        ll s=max(x,y);
        ll s1=(s-1)*(s-1);
        ll res;
        if(s%2)
        {
            if(s==y)
            {
                res=s1+x;
            }
            else
            {
                res=s1+2*s-y;
            }
        }
        else
        {
            if(x==s)
            {
                res=s1+y;
            }
            else
            {
                res=s1+2*s-x;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}