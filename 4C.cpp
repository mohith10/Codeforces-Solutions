#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    map<string,ll> m;
    while(n--)
    {
        string s;
        cin>>s;
        if(m.count(s)==0)
        {
            m[s]=0;
            cout<<"OK\n";
            continue;
        }
        m[s]++;
        cout<<s<<m[s]<<endl;

    }
}
