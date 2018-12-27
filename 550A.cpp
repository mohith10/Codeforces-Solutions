#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s;
    cin>>s;
    string t=s;
    string a="AB",b="BA";
    ll res=0,res2=0;
    if(s.find(a)!=string::npos)
    {
        res++;
        s.replace(s.find(a),2,"00");
    }
    if(s.find(b)!=string::npos)
    {
        res++;
        s.replace(s.find(b),2,"00");
    }
    if(t.find(b)!=string::npos)
    {
        res2++;
        t.replace(t.find(b),2,"00");
    }
    if(t.find(a)!=string::npos)
    {
        res2++;
        t.replace(t.find(a),2,"00");
    }

    if(res==2||res2==2)
        cout<<"YES";
    else cout<<"NO";



}
