#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void fast(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}
bool check(string s)
{
    ll map[26]={0},res=0,count=0;
    for(ll i=0;i<s.length();i++)
        map[s[i]-'a']++;
    for(ll i=0;i<26;i++)
    {
        if(map[i]>1)
            return false;
        if(map[i]==1)
            count++;
        else if(map[i]==0)
        {
            res=max(res,count);
            count=0;

        }
    }
    res=max(res,count);
    //for(int i=0;i<26;i++)
      //  cout<<map[i]<<" ";
    if(res==s.length())
        return true;
    return false;

}
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(check(s))
            cout<<"Yes\n";
        else cout<<"No\n";

    }
}
