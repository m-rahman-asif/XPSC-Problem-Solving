#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int i, n;
        cin>>n;
        string s;
        vector<pair<int, int>>v;
        for(i=1; i<=n ;i++)
        {
            s.push_back('B');
            s.push_back('A');
            s.push_back('N');
        }
        int l=1, r=s.size()-1;
        while(l<r)
        {
            v.push_back({l+1, r+1});
            swap(s[l],s[r]);
            l+=3;
            r-=3;
        }
        cout<<v.size()<<endl;
        for(auto u:v)
            cout<<u.first<<" "<<u.second<<endl;
    }

    return 0;
}









