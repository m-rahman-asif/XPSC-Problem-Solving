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
    int n, i, j;
    cin>>n;
    vector<vector<int>>v(n);
    int mx=n*n, mn=1, s=1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(s%2==1)
            {
                v[i].push_back(mn);
                mn++;
                s++;
            }
            else
            {
                v[i].push_back(mx);
                mx--;
                s++;
            }

        }
    }
     for(i=0; i<n; i++)
    {
        if(i%2==1)
            reverse(v[i].begin(), v[i].end());
    }
    for(i=0; i<n; i++)
    {
        for(auto u:v[i])
            cout<<u<<" ";
        cout<<endl;
    }

    }
    return 0;
}








