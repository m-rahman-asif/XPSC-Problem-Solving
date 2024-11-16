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

    vector<vector<int>> v(n), vev(n+10);
    vector<int>ans(n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            int a;
            cin>>a;
            v[i].push_back(a);
            vev[v[i][j]].push_back(j);
        }
    }
    for(i=1; i<=n; i++)
    {
        sort(vev[i].begin(), vev[i].end());
    }



    for(i=1; i<=n; i++)
    {
        if(vev[i][0]==0 && vev[i][n-2]==0)
        {
            ans[0]=i;
        }
        else if(vev[i][0]==n-2 && vev[i][n-2]==n-2)
            {
            ans[n-1]=i;
            }
        else
        {
            ans[vev[i].back()]=i;

        }
    }


    for(auto u:ans)
        cout<<u<<" ";
    cout<<endl;
    }
    return 0;
}







