#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //H Q 9 +
    if(s.find("H")!=string::npos)
    cout<<"Yes";
    else if(s.find("Q")!=string::npos)
    cout<<"Yes";
    else if(s.find("9")!=string::npos)
    cout<<"Yes";
    else if(s.find("+")!=string::npos)
    cout<<"Yes";
    else cout<<"No";

}
