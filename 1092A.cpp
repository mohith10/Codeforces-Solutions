#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll n,k;
       cin>>n>>k;
       string res="";
       for(ll i=0;i<n;i++)
        res+=((i%k)+'a');
       cout<<res<<"\n";

   }
}
