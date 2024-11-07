#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int i, j, n, m, q, tea, d;
        cin>>n>>m>>q;
        vector<long long int>v(n);
        vector<long long int>ans;
        for(i=0; i<m; i++)
        {
            cin>>tea;
            v[tea-1]=1;
        }

        for(i=0; i<q; i++)
        {
            long long int l=-1, r=-1;
            cin>>d;
            d=d-1;

            for(j=d+1; j<n; j++)
            {
                if(v[j]==1)
                {
                    r=j;
                    break;
                }
            }
            for(j=0; j<d; j++)
            {
                if(v[j]==1)
                {
                    l=j;
                    break;
                }
            }
            cout<<l<<" "<<r<<endl;
            if(l==-1)
                ans.push_back(r-1);
            else if(r==-1)
                ans.push_back(n-l);
            else
                ans.push_back((r-l)/2);
        }
        for(auto u:ans)
            cout<<u<<" ";
        cout<<endl;

    }
    return 0;
}











