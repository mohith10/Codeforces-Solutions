#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   ll k;
   cin>>k;
   string s;
   cin>>s;
   map<char,ll> m;
   for(ll i=0;i<s.length();i++)
    m[s[i]]++;
    bool found=true;
    string res_string="";
    for(map<char,ll>::iterator it=m.begin();it!=m.end();it++)
       {
           if(it->second%k!=0)
            {
                found=false;
                break;
            }
          else{
             ll count=it->second/k;
            while(count--)
                res_string+=it->first;
          }

       }
    if(!found)
    {
        cout<<-1;
        return 0;
    }
    while(k--)
        cout<<res_string;

}
