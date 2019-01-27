#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    multiset<ll> m;
    for(ll i=0;i<n;i++)
    {
        ll ele;
        cin>>ele;
        m.insert(ele);
    }
    ll res1=*prev(m.end());
    //cout<<res1;
    for(ll i=1;i<=res1;i++)
    {
        if(res1%i==0)
            m.erase(m.find(i));
    }
    cout<<res1<<" "<<*prev(m.end());

}
