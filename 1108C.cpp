#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    auto ans_string=s;
    string comp="BGR";
    ll ans=n;
    do
    {
        string temp=comp;
        ll ind=0;
        ll count=0;
        for(ll i=0;i<n;i++)
        {
            count+=(s[i]!=temp[ind%3]);
            ind++;
        }
        if(ans>count){
                ans=count;
                ans_string=comp;
        }

    }while(next_permutation(comp.begin(),comp.end()));
    cout<<ans<<endl;
    ll ind=0;
    for(ll i=0;i<n;i++)
    {
        cout<<ans_string[ind%3];
        ind++;
    }

}
