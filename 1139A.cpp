#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll res=0;
    for(ll i=0;i<s.length();i++)
    {
        if((s[i]-'0')%2==0)
            res+=(i+1);
    }
    cout<<res;

}
