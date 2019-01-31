#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    char a[n][n];
    for(ll i=0;i<n;i++)
        for(ll j=0;j<n;j++)
        cin>>a[i][j];
    ll res=0;
    for(ll i=1;i<n-1;i++)
        for(ll j=1;j<n-1;j++)
        res+=((a[i][j]=='X')&&(a[i-1][j-1]=='X')&&(a[i-1][j+1]=='X')&&(a[i+1][j+1]=='X')&&(a[i+1][j-1]=='X'));

              cout<<res;
}
