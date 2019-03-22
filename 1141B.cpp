#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];

    ll temp=0,res=0,s;
    for(ll i=0;i<2*n;i++)
    {
        if(a[i%n]==1)
        {
            temp++;
            res=max(res,temp);
        }
        else
        {

            temp=0;
        }
    }
    cout<<res;
}
