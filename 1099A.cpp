/*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int w,d;
    cin>>w>>d;
    int  u1,d1,u2,d2;
    cin>>u1>>d1>>u2>>d2;
    
     
        while(d)
    {
        w+=d;
        if(d==d1)
        w=max(0,w-u1);
        if(d==d2)
        w=max(0,w-u2);
        d--;
    }
    cout<<w;
}
