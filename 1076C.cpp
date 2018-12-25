#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    double n;
    cin>>n;
    while(n--)
    {
        double ele;
        cin>>ele;
        if(ele<4&& ele>0)
            cout<<"N\n";
        else{
            double a=(ele+sqrt((ele*ele)-(4*ele)))/2;
            double b=(ele-sqrt((ele*ele)-(4*ele)))/2;
            double res=max(a,b);
            cout<<setprecision(19)<<"Y"<<" "<<ele-res<<" "<<res<<endl;
        }
    }
}
