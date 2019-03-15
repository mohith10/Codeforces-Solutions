#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll h1,m1,h2,m2;
    cin>>h1>>m1>>h2>>m2;
    ll min=(((h2-h1)*60)+(m2-m1))/2;
    ll x=h1+(min/60);
    ll y=m1+(min%60);
    cout<<x<<":"<<y;

}
