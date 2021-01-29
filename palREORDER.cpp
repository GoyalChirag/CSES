#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
int main()
{
    lli i;
    string s;
    cin>>s;
    lli n=s.length();
    lli l=0;
    lli r=n-1;
    for(i=0;i<n/2;i++)
    {
        if(s[l]==s[r])
        {
            l++;
            r--;
        }
        else
        {
            s[l]=s[r];
            l++;
            r--;
        }
    }
    cout<<s;
    return 0;
}