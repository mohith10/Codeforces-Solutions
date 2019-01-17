#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Remove(string &s,const string &c)
{
    size_t found=s.find(c);
    if(found==string::npos)
    {
        cout<<-1;
        exit(0);
    }
    s.erase(0,found+1);
}
int main()
{
    string s;
    cin>>s;
    ll count=0;
    Remove(s,"[");
    Remove(s,":");
    reverse(s.begin(),s.end());
    Remove(s,"]");
    Remove(s,":");
    for(ll i=0;i<s.length();i++)
        count+=(s[i]=='|');
    cout<<count+4;


}
