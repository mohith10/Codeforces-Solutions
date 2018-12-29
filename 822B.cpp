#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll n,m;
   cin>>n>>m;
   string s,t;
   cin>>s>>t;
   ll res=n;
   ll up_lim=0,low_lim=n-1;
   for(ll i=0;i<m-n+1;i++)
   {
       ll count=0,s_point=0;
       for(ll j=i;j<(i+n);j++)
        count+=(s[s_point++]!=t[j]);
       if(count<res)
       {
           res=count;
           up_lim=i;
           low_lim=i+n-1;
       }
   }
   cout<<res<<endl;
   ll start_point=0;
   for(ll i=up_lim;i<=low_lim;i++)
    if(s[start_point++]!=t[i])
    cout<<start_point<<" ";

}
