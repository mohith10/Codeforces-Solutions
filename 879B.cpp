#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,k;
    cin>>n>>k;
    deque<ll> q;
    ll maxi=0;
    for(ll i=0;i<n;i++)
    {
        ll ele;
        cin>>ele;
        q.push_back(ele);
        maxi=max(ele,maxi);
    }
    if(k>=n-1)
    {
        cout<<maxi;
        return 0;
    }
    ll winner=-1,win_count=0;
    bool found=false;
    while(1)
    {
        ll x=q.front();
        q.pop_front();
        ll y=q.front();
        q.pop_front();
        if(x>y && x==winner)
        {
            if(win_count+1==k)
                found=true;
            else win_count++;
            q.push_front(x);
            q.push_back(y);
            //continue;
        }
        else if(x>y)
        {
            winner=x;
            q.push_front(x);
            q.push_back(y);
            win_count=1;
            //continue;
        }
        else
        {
            winner=y;
            q.push_front(y);
            q.push_back(x);
            win_count=1;
        }
        if(found)
            break;

    }
    cout<<winner;

}
