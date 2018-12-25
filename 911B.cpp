#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int win_size=1;
    // for_a,for_b;
    int res=0;
    for(win_size=1;win_size<n;win_size++)
    {
        int one=a/win_size;
        int two=b/(n-win_size);
        if(one>=1 && two>=1)
        res=max(res,min(one,two));
        //win_size++;
    }
    cout<<res;
}
