#include <bits/stdc++.h>
#define lli long long int 
#define mod 1000000007
using namespace std;
int main()
{
    int n;
    cin>>n;
    lli a[n];
    lli k=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            int t=a[i]+a[j];
            if(a[i]==k)
            {
                cout<<"here";
                k++;
            }
            else
            {
                continue;
            }
        }
    }
    cout<<k;
    return 0;
}