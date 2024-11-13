#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    vector<string>v;
    map<string, int>m;
    while(t--)
    {
        string s;
        cin>>s;
        if(m[s]==0)
        {
            v.push_back(s);
        }

    }
    for(int i=v.size()-1; i>=0; i--)
    {
        if(m[v[i]]==0)
        {
            cout<<v[i][v[i].size()-2]<<v[i][v[i].size()-1];
            m[v[i]]=1;
        }
    }
    cout<<endl;
    return 0;
}







