#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<string>v;

    vector<string>v2;
    map<string, int>m;
    while(t--)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    for(int i=v.size()-1; i>=0; i--)
    {
        if(m[v[i]]==0)
        {
            v2.push_back(v[i]);
            m[v[i]]=1;
        }
    }
    for(auto u:v2)
        cout<<u<<endl;

    return 0;
}




