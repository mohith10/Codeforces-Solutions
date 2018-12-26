#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    map<ll,ll> a,b;
    for(ll i=0;i<n;i++)
    {
        ll ele;
        cin>>ele;
        a[ele]++;
        b[ele]++;
    }
    ll res1,res2;
    for(ll i=0;i<n-1;i++)
    {
        ll ele;
        cin>>ele;
        if(a[ele]>1)
            a[ele]--;
        else
            a.erase(ele);
    }
    map<ll,ll>::iterator it;
    it=a.begin();
    res1=it->first;
    if(b[it->first]>1)
        b[it->first]--;
    else b.erase(it->first);
    for(ll i=0;i<n-2;i++)
    {
        ll ele;
        cin>>ele;
        if(b[ele]>1)
            b[ele]--;
        else
            b.erase(ele);
    }
    map<ll,ll>::iterator it2;
    it2=b.begin();
    res2=it2->first;
    cout<<res1<<endl<<res2;

}
