#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2)
        {
            if((s[0]-'0')<(s[1]-'0'))
            {
                cout<<"YES\n"<<2<<endl<<s[0]<<" "<<s[1]<<endl;
            }
            else cout<<"NO"<<endl;
            continue;
        }

         cout<<"YES\n"<<2<<endl;
         cout<<s[0]<<" ";
         for(ll i=1;i<n;i++)
            cout<<s[i];
         cout<<endl;
    }

}
