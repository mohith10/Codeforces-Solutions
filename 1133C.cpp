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
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll res=0;
    ll j=0;
   for(ll i=0;i<n;i++)
   {
       while(j<n && (a[j]-a[i]<=5))
       {
           j++;
           res=max(res,j-i);
       }
   }
   cout<<res;

}
