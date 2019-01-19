#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    if(x>y)
        cout<<n;
    else
    {
        double cnt=0;
        for(ll i=0;i<n;i++)
            cnt+=(a[i]<=x);
        cout<<ceil(cnt/2);
    }
}
