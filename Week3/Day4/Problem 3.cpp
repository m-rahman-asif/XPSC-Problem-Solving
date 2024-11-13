#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m, i, j, c=0;
    cin>>n>>m;
    map<long long int, long long int>mpa;
    map<long long int, long long int>mpb;
    map<long long int, long long int>mp;
    long long int a[n], b[m];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        mpa[a[i]]++;

    }
    for(i=0; i<m; i++)
    {
        cin>>b[i];
        mpb[b[i]]++;
    }
    for(i=0; i<n; i++)
    {
        if(mp[a[i]]==0)
        {
            c+=(mpa[a[i]]*mpb[a[i]]);
            mp[a[i]]=1;
        }
    }
    cout<<c<<endl;

    return 0;
}








