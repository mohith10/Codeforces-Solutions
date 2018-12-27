#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    cin>>n>>k;
    char a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    map<char,ll > pos;
    for(ll i=0;i<n;i++)
    {
        pos[a[i]]=i;
    }
    bool res=false;
    set<char> s;
    for(ll i=0;i<n;i++)
    {
        s.insert(a[i]);
        if(s.size()>k)
            res=true;
        if(pos[a[i]]==i)
            s.erase(a[i]);
    }
    if(res)
        cout<<"YES";
    else cout<<"NO";


}

