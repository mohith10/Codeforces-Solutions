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
    ll sum=0;
    sort(a,a+n);
    ll s=0,e=n-1;
    while(s<e)
    {
        sum+=((pow(a[s]+a[e],2)));
        s++;e--;
    }
    cout<<sum;
}
