#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
int main()
{
    db a,b,n;
    cin>>a>>b>>n;
    db res=1e9;
    while(n--)
    {
        db x,y,v;
        cin>>x>>y>>v;
        res=min(sqrt(pow(abs(x-a),2)+pow(abs(b-y),2))/v,res);
    }
    cout<<setprecision(20)<<res;
}
