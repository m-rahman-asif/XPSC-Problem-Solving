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
    int i, n, qs;
    cin>>n>>qs;
    int a[n];
    map<int, vector<int>>m;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        m[a[i]].push_back(i);
    }

    for(auto u:m)
    {
        sort(m[u.first].begin(), m[u.first].end());
    }

    for(i=1; i<=qs; i++)
    {
        int x, y;
        cin>>x>>y;
        if(m[x].empty()==0 && m[y].empty()==0)
        {
            if(m[x][0]<=m[y][m[y].size()-1])
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }


    }


    return 0;
}










