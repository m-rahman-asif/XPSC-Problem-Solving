#include<bits/stdc++.h>
using namespace std;
int main()
{
    map< long long, int> m;
    int t, i, in;
    cin>> t;
    for(i=1; i<=t; i++)
    {
        cin>>in;
        m[in]++;
    }
    int ma=0;
    for(auto u:m)
        {
            if(ma<u.second)
                ma=u.second;
        }
        cout<<ma<<endl;
    return 0;
}
