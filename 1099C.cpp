#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    string s;
    cin>>s;
    ll k;
    cin>>k;

    ll qcount=0,scount=0,len=s.length();
    for(ll i=0;i<len;i++)
    {
        qcount+=(s[i]=='?');
        scount+=(s[i]=='*');
    }
    ll size=len-qcount-scount;
    //cout<<"star"<<scount<<" ? "<<qcount<<" non extra "<<size<<endl;
    if(size==k)
    {
        for(ll i=0;i<len;i++)
        if(s[i]!='*'&&s[i]!='?')
            cout<<s[i];
    }
    else if(size<k&&scount>=1)
    {
        string start="",mid="",endi="";
        bool found=false;
        char prev;
        //cout<<"Here we entered"<<endl;
        ll diff=k-size;
        for(ll i=0;i<len;i++)
        {
            if(s[i]=='?')
            continue;
            else if(s[i]=='*'&&!found)
            {
                found=true;
                //cout<<"Prev"<<s[i-1]<<endl;
                prev=s[i-1];
            }
            else if(!found&&(s[i]>='a'&&s[i]<='z'))
            start+=s[i];
            else if(found&&(s[i]>='a'&&s[i]<='z'))
            endi+=s[i];
        }
        //cout<<"Start ";
        cout<<start;
        for(ll i=0;i<diff;i++)
        cout<<prev;

        //cout<<"\nend\n";
        cout<<endi;
    }
    else if(k<size&&(scount+qcount>=(size-k)))
    {
        ll diff=size-k,write=0,read=0;
        bool done=false;
        string res="";
        for(ll i=len-1;i>=0;i--)
        {
            if(!done&&(s[i]=='*'||s[i]=='?'))
            {
                i--;
                diff--;
                if(diff==0)
                done=true;

            }
            else if(s[i]>='a'&&s[i]<='z')
            res+=s[i];
        }
        reverse(res.begin(),res.end());
        cout<<res;
    }
    else cout<<"Impossible";
}
