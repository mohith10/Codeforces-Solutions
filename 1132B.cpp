#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll q;
    cin>>q;
    sort(a,a+n,greater<ll>());
    while(q--)
    {
        ll x;
        ll res=0;
        cin>>x;
        for(ll i=0;i<n;i++)
        {
            if(x>1)
              {
                   res+=a[i];

              }
            else if(x<=0)
                res+=a[i];
                x--;

        }
        cout<<res<<endl;
    }
}
