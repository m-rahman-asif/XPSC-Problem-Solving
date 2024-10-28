#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    cin>>t;
    string s, s2;
    map < string, int > m;
    for(i=1; i<=t; i++)
    {
        cin >> s;
        if(m[s]==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        m[s]=1;
    }


    return 0;
}
