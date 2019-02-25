#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll n;
    cin>>n;
    vector<vector<ll>> v(n+1);
    vector<ll> a;
    for(ll i=0;i<n+n;i++)
    {
        ll ele;
        cin>>ele;
        a.push_back(ele);
       // cout<<1<<endl;
    }
    //cout<<"222"<<endl;
    for(ll i=0;i<n+n;i++)
       {
           //cout<<"new"<<endl;
           v[a[i]].push_back(i);
           //cout<<1<<endl;
       }
    ll x=0,y=0,res=0;
    for(ll i=1;i<=n;i++)
    {
        res+=min(abs(x-v[i][0])+abs(y-v[i][1]),abs(x-v[i][1])+abs(y-v[i][0]));
        x=v[i][0];
        cout<<1<<endl;
        y=v[i][1];
    }
    cout<<res;
}
