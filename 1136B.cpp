#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();

    ll n,m;
    cin>>n>>m;
    cout<<min(n-m,m-1)+3*n;
}
