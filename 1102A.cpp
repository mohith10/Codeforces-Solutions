#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    n=((n)*(n+1))/2;
    if(n%2)
        cout<<1;
    else cout<<0;
}
