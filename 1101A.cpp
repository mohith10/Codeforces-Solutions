#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define 	pi 				3.14159265358979323846264338327950288
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r,d;
        cin>>l>>r>>d;
        l--;
        if((l/d)||(d>r))
        {
            cout<<d<<endl;
            continue;
        }
        ll x=r/d;
        x++;
        cout<<x*d<<endl;
    }


}
