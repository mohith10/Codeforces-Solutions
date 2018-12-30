#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    set<db> s;
    while(n--)
    {
        int x,y;
        cin>>x>>y;
        if(a-x==0 && b-y==0)
            continue;
        else if(y-b==0)
            s.insert(2000000.0);
        else if(x-a==0)
            s.insert(3000000.0);
        else s.insert(1.0*(x-a)/(y-b));
    }
    cout<<s.size();
}
