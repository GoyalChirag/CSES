#include <bits/stdc++.h> 
using namespace std; 
#define ll long long int
int main() 
{
    string s;
    cin>>s;
    ll c=0,res=0;
    char ch='A';
    for(char d : s)
    {
        if(d==ch)
        {
            ++c;
            res=max(c,res);
        }
        else
        {
            ch=d;
            c=1;
        }
    }
    cout<<res;
    return 0;
} 