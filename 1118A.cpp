#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll t;
    cin>>t;
    while(t--)
    {

        ll n,x,y;
        cin>>n>>x>>y;
        cout<<min((n*x),(n/2)*y+(n%2)*x)<<endl;
    }

}
