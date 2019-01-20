#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll maxa=0,maxb=0;
    while(n--)
    {
        ll a,b;
        char ch;
        cin>>ch>>a>>b;
        if(a<b)
            swap(a,b);
        if(ch=='+')
        {
            maxa=max(a,maxa);
            maxb=max(b,maxb);

        }
        else
        {
            if((maxa<=a&&maxb<=b)||(maxa<=b&&maxb<=a))
                cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}
