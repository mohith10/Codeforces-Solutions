#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n,greater<ll>());
   // cout<<a[0]<<a[1]<<endl;
    ll q=m/(k+1);
    ll r=m%(k+1);
    ll sum=(k*(a[0]))+a[1];
    //out<<sum;
    ll res=q*sum;
    //cout<<1000000000000000000<<endl;
    res+=(r*a[0]);
    cout<<res;
}
