#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll cnt=0,n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1)
    {
        cout<<0<<endl<<s;
        return 0;
    }
    else if(n==2&&s[0]!=s[1])
    {
        cout<<0<<endl<<s;
        return 0;
    }
    else if(n==2&&s[0]==s[1])
    {
        if(s[0]=='G')
            s[1]='R';
        else if(s[0]=='R')
            s[1]='G';
        else if(s[0]=='B')
        s[1]='R';
        cout<<1<<endl<<s;
        return 0;
    }
    ll tot='R'+'G'+'B';
    //cout<<tot;
    for(ll i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
            bool left=((i-2)>=0);
            bool right=((i+1)<n);
            if(!left && right)
            {
                if(s[i+1]==s[i-1])
                {
                    if(s[i-1]=='G')
                        s[i]='R';
                    else if(s[i-1]=='R')
                        s[i]='G';
                     else  if(s[i-1]=='B')
                        s[i]='G';
                }
                else s[i]=tot-(s[i+1]+s[i-1]);
            }
            else if(!right)
                s[i]=s[i-2];
            else if(right&&(tot-(s[i-1]+s[i-2])!=s[i+1]))
                    s[i]=tot-(s[i-1]+s[i-2]);
            else if(right&&(tot-(s[i-1]+s[i-2])==s[i+1]))
                    s[i]=s[i-2];
        }

    }
    cout<<cnt<<endl<<s;

}
