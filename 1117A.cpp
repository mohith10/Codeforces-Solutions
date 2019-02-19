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
    //sort(a,a+n);
    ll res=0,resf=0;
    ll maxi=*max_element(a,a+n);
    //cout<<maxi;
    for(ll i=0;i<n;i++)
    {
        if(a[i]==maxi)
           {
               res++;
              // cout<<"found"<<i<<endl;
           }
        else
        {
            resf=max(resf,res);
            res=0;
        }
    }
    resf=max(res,resf);
    cout<<resf;
}
