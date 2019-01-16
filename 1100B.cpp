#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{

    ll n,m;
    set<ll> s;
    cin>>n>>m;
    vector<ll> v(n+1,0);
    for(ll i=0;i<m;i++)
    {
        ll ele;
        cin>>ele;
        s.insert(ele);
        v[ele]++;
        if(s.size()==n)
        {
            cout<<1;
            s.clear();
            for(ll j=1;j<=n;j++)
            {
                v[j]--;
                if(v[j]>0)
                    s.insert(j);


            }
        }
        else cout<<0;
    }
//    cout<<res;

}
