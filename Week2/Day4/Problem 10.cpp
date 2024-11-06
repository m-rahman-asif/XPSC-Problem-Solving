#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        vector<pair<int, int>>v1;
        for(i=1; i<=n; i++)
        v.push_back(i);

        while(v.size()>1)
        {
            int a=v[v.size()-1], b=v[v.size()-2];
            v.pop_back();
            v.pop_back();
            v1.push_back({a, b});

            int c=a+b;
            if(c%2==0)
                v.push_back( c/2 );
            else
                v.push_back( (c/2)+1 );
        }
        cout<<v[0]<<endl;
        for(auto u:v1)
        {
            cout<<u.first<<" "<<u.second<<endl;
        }
    }


    return 0;
}





