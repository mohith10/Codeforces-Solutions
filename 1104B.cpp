#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void fast()
{
    ios::sync_with_stdio(0);
    cout.tie(0);
    cin.tie(0);
}
int main()
{
    fast();
    string s;
    cin>>s;
    ll count=0;
    stack<char> st;
    for(ll i=0;i<s.length();i++)
    {
        if(st.empty())
            st.push(s[i]);
        else
        {
            ll ele=st.top();
            if(ele==s[i])
                {
                    st.pop();
                    count^=1;
                }
            else{
                //st.push(ele);
                st.push(s[i]);
            }
        }


    }
    if(count)
        cout<<"Yes";
    else cout<<"No";

}
