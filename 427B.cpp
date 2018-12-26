#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,t,c;
    cin>>n>>t>>c;
    ll a[n],check[n];
    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            check[i]=(a[i]<=t);
        }
      
    ll res=0;
    ll count=0;
    for(ll i=0;i<n;i++)
    {
        
        if(check[i]==1)
            {
                count++;
                if(count%c==0)
                {
                    res++;
                    count--;
                }
            }
        else{
            count=0;
        }
    }
    if(count)
    res+=(count%c==0);
    //res=max(res,count);
    cout<<res;

}
