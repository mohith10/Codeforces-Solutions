#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   string s;
   cin>>s;
   ll n=s.length();
   ll start=0,end=n-1,abnormal=0;
   while(start<end)
   {
       if(s[start]!=s[end])
        abnormal++;
       if(abnormal>1)
        break;
        start++;end--;
   }
   if(abnormal==0 && n%2==1)
    cout<<"YES";
   else if(abnormal==1)
    cout<<"YES";
   else cout<<"NO";
}
