#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll n;
   cin>>n;
   vector<string> a[4];
   while(n--)
   {
       string x,y;
       cin>>x>>y;
       if(y=="rat")
        a[0].push_back(x);
       else if(y=="woman"||y=="child")
        a[1].push_back(x);
        else if(y=="man")
        a[2].push_back(x);
        else if(y=="captain")
        a[3].push_back(x);

   }
   for(ll i=0;i<4;i++)
   {
       for(ll j=0;j<a[i].size();j++)
        cout<<a[i][j]<<endl;
   }

}
