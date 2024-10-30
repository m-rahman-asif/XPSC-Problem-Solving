#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    string s1, s2;
    map<string, string>m;
    map<string, string>m2;
    while(n--)
    {
        int f=0;
        cin>>s1>>s2;
        for(auto u:m)
        {
            if(u.second==s1)
            {
                m[u.first]=s2;
                f=1;
            }
        }
        if(f==0)
            m[s1]=s2;
    }
    cout<<m.size()<<endl;
    for(auto x:m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}



