#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define 	pi 				3.14159265358979323846264338327950288
int main()
{

    double n,r;
    cin>>n>>r;

    double cosi=sin(acos(-1)/n);
    //cout<<cosi;
    double R=r*(cosi/(1-cosi));
    cout<<setprecision(20)<<R;


}
