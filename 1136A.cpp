#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();

    ll n;
    cin>>n;
    pair<ll,ll> a[n];
    for(ll i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        a[i]=make_pair(x,y);
    }
    ll k;
    cin>>k;
    ll res=0;
    for(ll i=0;i<n;i++)
        res+=(k<=a[i].second);
    cout<<res;
}
