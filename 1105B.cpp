#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    map<char,ll> m;
    char prev=s[0];
    ll tempk=0;
    for(ll i=0;i<n;i++)
    {

        if(s[i]==prev)
        {
            tempk++;

        }
        else
        {
            if(tempk==k)
            {
                m[prev]++;
                tempk=0;
            }
            prev=s[i];
            tempk=1;

        }
        if(tempk==k)
        {
            m[prev]++;
            tempk=0;
        }
    }
    if(tempk==k)
            {
                m[prev]++;
                tempk=0;
            }
    map<char,ll>::iterator it;
    ll res=0;
    for(it=m.begin();it!=m.end();it++)
    {
        res=max(res,it->second);
    }
    cout<<res;
}
