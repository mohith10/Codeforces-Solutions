#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ll n;
   cin>>n;
   ll a[n];
   for(ll i=0;i<n;i++)
    cin>>a[i];
   sort(a,a+n);
   ll sum=0;
   for(ll i=0;i<n;i+=2)
    sum+=(a[i+1]-a[i]);
   cout<<sum;
}
