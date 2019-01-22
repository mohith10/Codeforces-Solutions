#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,sum=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
    //ll maxi=*max_element(a,a+n);
    ll final_res=1e9;
    ll rest=sum;
    for(ll t=1e5;t>=0;t--)
    {
        ll res=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>t)
            res+=abs(a[i]-(t+1));
            else if(a[i]<t)
            res+=abs(a[i]-(t-1));
        }
        //cout<<"t :"<<t<<" \nres :"<<res<<endl;
        if(res<final_res)
        {
            rest=t;
            final_res=res;
        }
    }
    cout<<rest<<" "<<final_res;
}
