#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,d;
    cin>>n>>d;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll res=0;
    for(ll i=0;i<n-2;i++)
    {
        ll it=lower_bound(a,a+n,a[i]+d)-&a[0];
        if(a[i]+d!=a[it])
            --it;
          it-=i;
        res+=(it*(it-1)/2);
    }
    cout<<res;
}
