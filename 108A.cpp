#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string time;
    cin>>time;

   ll min=((time[3]-'0')*10)+(time[4]-'0'),hour=((time[0]-'0')*10)+(time[1]-'0');
   //cout<<min<<" "<<hour<<endl;
   //cin>>hour>>min;
   do{
    min++;
    if(min==60)
    {
        hour++;
        min=0;
    }
    if(hour==24)
    {
        hour=0;
    }
   }while(hour%10*10+hour/10!=min);
   //if(hour==0 && min==0)
   {
    //   cout<<"00:00";
    //   return 0;
   }
   cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<min<<setfill('0');
}
