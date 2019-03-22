#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll n,m;
    cin>>n>>m;
    ll res=-1;
    if(m%n==0)
    {
        res=0;
        ll d=m/n;
        while(d%2==0)
        {
            d/=2;
            res++;
        }
        while(d%3==0)
        {
            d/=3;
            res++;

        }
        if(d!=1)
            res=-1;

    }
    cout<<res;
}
