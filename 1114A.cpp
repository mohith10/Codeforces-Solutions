#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
int main()
{
    fast();
    ll x,y,z,a,b,c;
    ll f=1;
    cin>>x>>y>>z>>a>>b>>c;
    if(x>a)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        a-=x;
        if(y>(a+b))
        {
            cout<<"NO";
            return 0;
        }
        ll d=a+b;
        d-=y;
        if(z>(d+c))
        {
            cout<<"NO";
            return 0;
        }
        cout<<"YES";
        return 0;
    }


}
