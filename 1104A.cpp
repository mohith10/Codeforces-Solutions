#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void fast()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
}
int main()
{
    fast();
    ll n,res,ans;
    cin>>n;
    for(ll i=9;i>=0;i--)
    {
        if(n%i==0)
        {
            res=n/i;
            ans=i;
            break;
        }
    }
    cout<<res<<endl;
    for(ll i=0;i<res;i++)
    {
        cout<<ans<<" ";
    }

}
