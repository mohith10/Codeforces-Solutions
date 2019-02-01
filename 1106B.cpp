#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pp pair<ll,ll>
int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n],c[n];
    priority_queue<pp,vector<pp>,greater<pp>> q;
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<n;i++)
    {
        cin>>c[i];
        q.push(make_pair(c[i],i));
    }
    /*while(!q.empty())
    {
        cout<<q.top().first<<" "<<q.top().second<<endl;
        q.pop();
    }
*/
    while(m--)
    {
        ll t,d;
        cin>>t>>d;
        t--;
        if(a[t]>=d)
        {
            a[t]-=d;
            cout<<c[t]*d<<endl;
        }
        else{
            bool flag=false;
            ll ans=a[t]*c[t];
            //a[t]=0;
            d-=a[t];
            a[t]=0;
            while(!q.empty())
            {
                while(!q.empty()&&(a[q.top().second]==0))
                    q.pop();
                if(q.empty())break;
                pp now=q.top();
                if(d>a[now.second])
                {
                    d-=a[now.second];

                ans+=(a[now.second]*now.first);
                a[now.second]=0;
                q.pop();
                }
                else{
                        ans+=(d*now.first);
                        a[now.second]-=d;
                        flag=true;
                        cout<<ans<<endl;
                        break;

                }
            }
            if(!flag)
                cout<<0<<endl;
        }

    }


}
