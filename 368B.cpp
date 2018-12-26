#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],b[n];
    set<ll> s;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=n-1;i>-1;i--)
    {
        s.insert(a[i]);
        b[i]=s.size();
    }
    for(ll i=0;i<m;i++)
    {
        ll ele;
        cin>>ele;
        cout<<b[ele-1]<<endl;
    }
}
