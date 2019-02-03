#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool vowel(char ch)
{
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    return false;
}
int main()
{
    string s,t;
    cin>>s>>t;
    if(s.length()!=t.length())
        cout<<"No";
    else
    {
        bool res=true;
        for(ll i=0;i<s.length();i++)
        {
            if(vowel(s[i]) &&!vowel(t[i]))
            {
                res=false;
                break;
            }
            else if(vowel(t[i]) &&!vowel(s[i]))
            {
                res=false;
                break;
            }
        }
        if(res)
            cout<<"Yes";
        else cout<<"No";

    }

}
