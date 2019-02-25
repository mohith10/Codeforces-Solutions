#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll n,pos=0,neg=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        pos+=(a[i]>0);
        neg+=(a[i]<0);
    }
    ll lim=(n/2)+(n%2);
    if(pos<lim&&neg<lim)
        cout<<0;
    else if(pos>neg)
        cout<<1;
    else cout<<-1;

}
