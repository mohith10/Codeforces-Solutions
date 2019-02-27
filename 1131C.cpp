#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    ll temp[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    list<ll> l;
    bool flag=false;
    for(ll i=0;i<n;i++)
    {
        if(!flag)
            l.push_front(a[i]);
        else
            l.push_back(a[i]);
        flag=!flag;
    }
    vector<ll> res;
    for(ll x:l)
        res.push_back(x);
        for(ll i=0;i<n;i++)
            cout<<res[i]<<" ";

}
