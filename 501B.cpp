#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin>>n;
    map<string,string> m;
    while(n--)
    {
        string x,y;
        cin>>x>>y;
        bool found=false;
        for(map<string ,string>::iterator it=m.begin();it!=m.end();it++)
        {
            if(it->second==x)
            {
                found=true;
                it->second=y;
            }

        }
        if(!found)
                m[x]=y;

    }
    cout<<m.size()<<endl;
    for(map<string,string>::iterator it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<"\n";
}
