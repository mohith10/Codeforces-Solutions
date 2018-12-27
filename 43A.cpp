#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   string s;
   ll n;
   cin>>n;
    map<string,ll> m;
    ll res=0;
    string team;
   while(n--)
   {
       cin>>s;
       m[s]++;
       if(m[s]>res)
       {
           res=m[s];
           team=s;
       }
    }
    cout<<team;


}
